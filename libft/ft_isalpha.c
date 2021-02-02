/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:02:50 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/02 12:53:08 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isalpha: возвращает ненулевое значение,
** если ее аргумент 'c' является буквой, в противном
** случае возвращается нуль.
*/

int	ft_isalpha(int c)
{
	return (((c >= 65) && (c <= 90)) ||
			((c >= 97) && (c <= 122)) ? 1 : 0);
}
