/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:30:43 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 20:08:49 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_isin(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);

char	*ft_strtrim(const char *s, const char *set)
{
	unsigned int	start;
	size_t			len;

	start = 0;
	while (ft_isin(set, s[start]))
		++start;
	len = ft_strlen(s) - start;
	while (ft_isin(set, s[start + len - 1]))
		--len;
	return (ft_substr(s, start, len));
}
