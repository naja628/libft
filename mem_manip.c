/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_manip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:39:46 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 18:24:53 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef unsigned char	t_uchar;
typedef unsigned int	t_uint;

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	t_uint	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*((t_uchar *)dst + i) = *((t_uchar *)src + i);
		++i;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		while (n > 0)
		{
			*((t_uchar *)dst + n - 1) = *((t_uchar *)src + n - 1);
			--n;
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, n));
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_uint	i;

	i = 0;
	while (i < n)
	{
		if (*((t_uchar *)s + i) == (t_uchar) c)
			return ((void *)s + i);
		++i;
	}
	return (NULL);
}	

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	const t_uchar	*chr_p1;
	const t_uchar	*chr_p2;

	chr_p1 = p1;
	chr_p2 = p2;
	while (n != 0)
	{
		if (*chr_p1 != *chr_p2)
			return (*chr_p1 - *chr_p2);
		++chr_p1;
		++chr_p2;
		--n;
	}
	return (0);
}
