/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:33:53 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 18:36:24 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	if (*lst == NULL)
		return ;
	ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (lst == NULL)
		return ;
	f(lst -> content);
	ft_lstiter(lst -> next, f);
}

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

static t_list	*ft_lstmap_helper(t_list *lst, void *(*f)(void *), int *err)
{
	t_list	*image;
	t_list	*new_cell;

	*err = 0;
	if (lst == NULL)
		return (NULL);
	new_cell = ft_lstnew(f(lst -> content));
	if (!new_cell)
	{
		*err = 1;
		return (NULL);
	}
	image = ft_lstmap_helper(lst -> next, f, err);
	ft_lstadd_front(&image, new_cell);
	return (image);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		err;
	t_list	*image;

	err = 0;
	image = ft_lstmap_helper(lst, f, &err);
	if (err)
	{
		ft_lstclear(&image, del);
		return (NULL);
	}
	else
		return (image);
}
