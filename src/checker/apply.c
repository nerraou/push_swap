/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:34:46 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/28 19:38:41 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void apply(const char *action, t_list *list_a, t_list *list_b)
{
	if (ft_strcmp(action, "sa") == 0)
		sa(list_a);
	else if (ft_strcmp(action, "sb") == 0)
		sb(list_b);
	else if (ft_strcmp(action, "ss") == 0)
		ss(list_a, list_b);
	else if (ft_strcmp(action, "ra") == 0)
		ra(list_a);
	else if (ft_strcmp(action, "rb") == 0)
		rb(list_b);
	else if (ft_strcmp(action, "rr") == 0)
		rr(list_a, list_b);
	else if (ft_strcmp(action, "rra") == 0)
		rra(list_a);
	else if (ft_strcmp(action, "rrb") == 0)
		rrb(list_b);
	else if (ft_strcmp(action, "rrr") == 0)
		rrr(list_a, list_b);
	else if (ft_strcmp(action, "pa") == 0)
		pa(list_a, list_b);
	else if (ft_strcmp(action, "pb") == 0)
		pb(list_a, list_b);
}
