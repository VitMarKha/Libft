/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:35:27 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/02 12:53:39 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstiter: Итерируем список ’lst’ и применяем
** функцию'f' к содержанию каждого элемента.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *p;

	while (lst)
	{
		p = lst->next;
		f(lst->content);
		lst = p;
	}
}
