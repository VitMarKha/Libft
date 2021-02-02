/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:53:03 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/02 12:54:40 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strchr: возвращает указатель на первое
** вхождение символа c в строку, на которую
** указывает s.
*/

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tmp = &s[i];
			return ((char *)tmp);
		}
		++i;
	}
	if (c == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}
