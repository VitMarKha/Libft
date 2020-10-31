/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:53:55 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/30 11:54:02 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strrchr: возвращает указатель на последнее
** вхождение младшего байта аргумента c в строке,
** на которую указывает str.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tmp = &s[i];
		++i;
	}
	if (tmp != NULL)
		return ((char *)tmp);
	return (NULL);
}
