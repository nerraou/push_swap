/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_be.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:15:56 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/11 17:56:44 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void move_be(t_list *list_a, t_list *list_b, int *be)
{
	int i;

	i = 0;
	// one of them is null
	if (be[0] * be[1] == 0)
	{
		if (be[0] == 0 && be[1] != 0)
		{
			i = ft_abs(be[1]);
			if (be[1] < 0)
			{
				while (i--)
				{
					rrb(list_b);
					ft_putstr("rrb\n");
				}
			}
			else
			{
				while (i--)
				{
					rb(list_b);
					ft_putstr("rb\n");
				}
			}
		}
		else if (be[1] == 0 && be[0] != 0)
		{
			i = ft_abs(be[0]);
			if (be[0] < 0)
			{
				while (i--)
				{
					rra(list_a);
					ft_putstr("rra\n");
				}
			}
			else
			{
				while (i--)
				{
					ra(list_a);
					ft_putstr("ra\n");
				}
			}
		}
	}
	// case different sign
	else if (be[0] * be[1] < 0)
	{
		i = ft_abs(be[0]);
		if (be[0] < 0)
		{
			while (i--)
			{
				rra(list_a);
				ft_putstr("rra\n");
			}
		}
		else
		{
			while (i--)
			{
				ra(list_a);
				ft_putstr("ra\n");
			}
		}
		i = ft_abs(be[1]);
		if (be[1] < 0)
		{
			while (i--)
			{
				rrb(list_b);
				ft_putstr("rrb\n");
			}
		}
		else
		{
			while (i--)
			{
				rb(list_b);
				ft_putstr("rb\n");
			}
		}
	}

	//case same signs
	else if (be[0] * be[1] > 0)
	{
		if (be[0] > 0)
		{
			i = ft_min(be[0], be[1]);
			while (i--)
			{
				rr(list_a, list_b);
				ft_putstr("rr\n");
			}
			if (be[0] > be[1])
			{
				i = be[0] - be[1];
				while (i--)
				{
					ra(list_a);
					ft_putstr("ra\n");
				}
			}
			else
			{
				i = be[1] - be[0];
				while (i--)
				{
					rb(list_b);
					ft_putstr("rb\n");
				}
			}
		}
		else
		{
			i = ft_min(be[0], be[1]);
			while (i--)
			{
				rrr(list_a, list_b);
				ft_putstr("rrr\n");
			}
			if (ft_abs(be[0]) > ft_abs(be[1]))
			{
				i = ft_abs(be[0]) - ft_abs(be[1]);
				while (i--)
				{
					rra(list_a);
					ft_putstr("rra\n");
				}
			}
			else
			{
				i = ft_abs(be[1]) - ft_abs(be[0]);
				while (i--)
				{
					rrb(list_b);
					ft_putstr("rrb\n");
				}
			}
		}
	}
	pa(list_a, list_b);
	ft_putstr("pa\n");
}
