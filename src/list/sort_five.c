/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:22:31 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/11 15:46:14 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void move_min(t_list *list_a)
{
	int min;

	min = min_list_pos(list_a);
	if (min <= 2)
	{
		while (min--)
		{
			ra(list_a);
			ft_putstr("ra\n");
		}
	}

	else
	{
		min = list_a->size - min;
		while (min--)
		{
			rra(list_a);
			ft_putstr("rra\n");
		}
	}
}

void sort_five(t_list *list_a, t_list *list_b)
{
	move_min(list_a);
	pb(list_a, list_b);
	ft_putstr("pb\n");
	move_min(list_a);
	pb(list_a, list_b);
	ft_putstr("pb\n");
	sort_three(list_a);
	pa(list_a, list_b);
	ft_putstr("pa\n");
	pa(list_a, list_b);
	ft_putstr("pa\n");
}