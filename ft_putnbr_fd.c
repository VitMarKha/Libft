/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:47:03 by fngoc             #+#    #+#             */
/*   Updated: 2020/10/31 15:47:05 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putnbr_fd: Выводит целое число 'n'
** в указанный файл дескриптор.
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	s = ft_itoa(n);
	len = ft_strlen(s);
	while (i < len)
		write(fd, &s[i++], 1);
}
