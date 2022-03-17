/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_best_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:23:23 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:11:02 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	free_pos(int **pos, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(pos[i]);
		i++;
	}
	free(pos);
}

void	move_best_element(t_list *list_a, t_list *list_b)
{
	int	**pos;
	int	size;
	int	best_elem;

	best_elem = 0;
	while (list_b->size)
	{
		pos = set_positions(list_a, list_b);
		if (!pos)
			free_exit(&list_a, &list_b, 1, "");
		best_elem = best_element(pos, list_b->size);
		size = list_b->size;
		move_be(list_a, list_b, pos[best_elem]);
		free_pos(pos, size);
	}
}
