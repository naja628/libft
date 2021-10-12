/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_manip2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:45:42 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 16:47:41 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>

typedef unsigned char	t_uchar;
typedef unsigned int	t_uint;

void	*ft_memset(void *b, int c, size_t len)
{
	t_uint	i;

	i = 0;
	while (i < len)
	{
		*((t_uchar *)b + i) = c;
		++i;
	}
	return (b);
}

void	ft_bzero(void *b, size_t n)
{
	ft_memset(b, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
