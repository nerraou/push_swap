/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:15:28 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:10:32 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_push_swap(t_list *list_a, t_list *list_b)
{
	if (list_a->size == 3)
		sort_three(list_a);
	else if (list_a->size == 5)
		sort_five(list_a, list_b);
	else
	{
		set_map(list_a, list_b);
		ft_set_list_b(list_a, list_b);
		move_best_element(list_a, list_b);
		min_to_top(list_a);
	}
	free_exit(&list_a, &list_b, 0, "");
}
