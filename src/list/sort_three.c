/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:18:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 14:56:56 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	sort_three(t_list *list_a)
{
	int	min;
	int	max;

	max = max_list_pos(list_a);
	if (max != 2)
	{
		if (max == 0)
		{
			ra(list_a);
			ft_putstr("ra\n");
		}
		else if (max == 1)
		{
			sa(list_a);
			ft_putstr("sa\n");
			ra(list_a);
			ft_putstr("ra\n");
		}
	}
	min = min_list_pos(list_a);
	if (min != 0)
	{
		sa(list_a);
		ft_putstr("sa\n");
	}
}
