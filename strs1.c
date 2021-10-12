/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:50:21 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 18:37:00 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t	count;

	count = 0;
	while (count + 1 < sz && *src)
	{
		*(dest++) = *(src++);
		++count;
	}
	if (sz != 0)
		*dest = '\0';
	while (*src)
	{
		++src;
		++count;
	}
	return (count);
}

size_t	ft_strlcat(char *dest, const char *src, size_t sz)
{
	size_t	count;

	count = 0;
	while (count < sz && *dest)
	{
		++dest;
		++count;
	}
	if (*dest == 0)
	{
		while (count + 1 < sz && *src)
		{
			*(dest++) = *(src++);
			++count;
		}
		*dest = '\0';
	}
	while (*src)
	{
		++src;
		++count;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		++s;
	}
	if ((char) c == '\0')
		return ((char *) s);
	else
		return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*last_instance;

	last_instance = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_instance = (char *) s;
		++s;
	}
	if ((char) c == '\0')
		last_instance = (char *) s;
	return (last_instance);
}
