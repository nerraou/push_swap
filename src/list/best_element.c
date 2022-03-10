/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:05:36 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/10 15:57:36 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int best_element(int **arr, int size)
{
	int i;
	int b_elem;
	int elem;
	int b_index;

	b_index = 0;
	b_elem = 60000;
	elem = 0;
	i = 0;
	while (i < size)
	{
		elem = element(arr[i]);
		if (b_elem > elem)
		{
			b_elem = elem;
			b_index = i;
		}
		i++;
	}
	return (b_index);
}