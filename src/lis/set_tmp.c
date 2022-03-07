/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:18:06 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/07 17:49:11 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

static void dummy_function(int *tmp, int *arr, int index, int tmp_index)
{
	int i;

	i = 0;
	while (i < index)
	{
		tmp[tmp_index] = arr[i];
		i++;
		tmp_index++;
	}
}

int *set_tmp(int *arr, int size)
{
	int i;
	int index;
	int *tmp;
	int j;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	index = min_index(arr, size);
	j = index;
	while (index < size)
	{
		tmp[i] = arr[index];
		i++;
		index++;
	}
	if (j > 0)
		dummy_function(tmp, arr, j, i);
	return (tmp);
}