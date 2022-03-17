/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_be.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:15:56 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 14:28:59 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

static void	execute(t_list *list, const char *inst, void (*f)(t_list *a), int n)
{
	while (n > 0)
	{
		f(list);
		ft_putstr(inst);
		n--;
	}
}

static void	ft_rr_rrr(t_list *list_a, t_list *list_b, const char *str, int n)
{
	if (ft_strcmp(str, "rrr") == 0)
	{
		while (n > 0)
		{
			rrr(list_a, list_b);
			ft_putstr("rrr\n");
			n--;
		}
	}
	else if (ft_strcmp(str, "rr") == 0)
	{
		while (n > 0)
		{
			rr(list_a, list_b);
			ft_putstr("rr\n");
			n--;
		}
	}
}

static void	one_of_them_null(t_list *list_a, t_list *list_b, int *be)
{
	if (be[0] == 0 && be[1] != 0)
	{
		if (be[1] < 0)
			execute(list_b, "rrb\n", rrb, ft_abs(be[1]));
		else
			execute(list_b, "rb\n", rb, ft_abs(be[1]));
	}
	else if (be[1] == 0 && be[0] != 0)
	{
		if (be[0] < 0)
			execute(list_a, "rra\n", rra, ft_abs(be[0]));
		else
			execute(list_a, "ra\n", ra, ft_abs(be[0]));
	}
}

static void	same_sign(t_list *list_a, t_list *list_b, int *be)
{
	if (be[0] > 0)
	{
		ft_rr_rrr(list_a, list_b, "rr", ft_min(be[0], be[1]));
		if (be[0] > be[1])
			execute(list_a, "ra\n", ra, be[0] - be[1]);
		else
			execute(list_b, "rb\n", rb, be[1] - be[0]);
	}
	else
	{
		ft_rr_rrr(list_a, list_b, "rrr", ft_min(be[0], be[1]));
		if (ft_abs(be[0]) > ft_abs(be[1]))
			execute(list_a, "rra\n", rra, ft_abs(be[0]) - ft_abs(be[1]));
		else
			execute(list_b, "rrb\n", rrb, ft_abs(be[1]) - ft_abs(be[0]));
	}
}

void	move_be(t_list *list_a, t_list *list_b, int *be)
{
	if (be[0] * be[1] == 0)
		one_of_them_null(list_a, list_b, be);
	else if (be[0] * be[1] > 0)
		same_sign(list_a, list_b, be);
	else if (be[0] * be[1] < 0)
	{
		if (be[0] < 0)
			execute(list_a, "rra\n", rra, ft_abs(be[0]));
		else
			execute(list_a, "ra\n", ra, ft_abs(be[0]));
		if (be[1] < 0)
			execute(list_b, "rrb\n", rrb, ft_abs(be[1]));
		else
			execute(list_b, "rb\n", rb, ft_abs(be[1]));
	}	
	pa(list_a, list_b);
	ft_putstr("pa\n");
}
