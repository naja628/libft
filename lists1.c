#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *createme;

	createme = malloc(sizeof(t_list));
	if (!createme)
		return (NULL);
	createme->content = content;
	createme->next = NULL;
	return (createme);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	return (1 + ft_lstsize(lst -> next));
}

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	return (ft_lstlast(lst->next));
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		ft_lstadd_back(&(*lst)->next, new);
	else 
		*lst = new;
}
