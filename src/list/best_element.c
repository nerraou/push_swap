/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:05:36 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 12:18:30 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	best_element(int **arr, int size)
{
	int	i;
	int	b_elem;
	int	elem;
	int	b_index;

	b_index = -1;
	b_elem = INT_MAX;
	i = 0;
	while (i < size)
	{
		elem = element(arr[i]);
		if (elem < b_elem)
		{
			b_elem = elem;
			b_index = i;
		}
		i++;
	}
	return (b_index);
}
