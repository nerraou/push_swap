/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:13:29 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 11:30:35 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "common.h"

void	min_to_top(t_list *list_a)
{
	int	min_pos;

	min_pos = min_list_pos(list_a);
	if (min_pos <= list_a->size / 2)
	{
		while (min_pos--)
		{
			ra(list_a);
			ft_putstr("ra\n");
		}
	}
	else
	{
		min_pos = list_a->size - min_pos;
		while (min_pos--)
		{
			rra(list_a);
			ft_putstr("rra\n");
		}
	}
}
