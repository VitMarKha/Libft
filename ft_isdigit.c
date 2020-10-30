/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:03:23 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/30 12:03:30 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isdigit: возвращает ненулевое значение,
** если аргумент c является цифрой от 0 до 9,
** в противном случае возвращается 0.
*/

int	ft_isdigit(int c)
{
	return (((c >= 48) && (c <= 57)) ? 1 : 0);
}