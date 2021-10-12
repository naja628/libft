/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:36:10 by najacque          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:23 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	diff;

	diff = 'a' - 'A';
	if ('A' <= c && c <= 'Z')
		return (c + diff);
	else
		return (c);
}

int	ft_toupper(int c)
{
	int	diff;

	diff = 'A' - 'a';
	if ('a' <= c && c <= 'z')
		return (c + diff);
	else
		return (c);
}
