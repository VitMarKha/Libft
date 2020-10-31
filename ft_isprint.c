/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:05:52 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/30 12:05:55 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isprint: возвращает ненулевое значение
** если c это печатаемый символ (0x20 - 0x7E).
*/

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
