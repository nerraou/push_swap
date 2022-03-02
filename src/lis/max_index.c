/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:22:32 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/02 12:27:19 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

int max_index(int *arr, int size)
{
	int tmp;
	int index;
	int i;

	index = 0;
	i = 1;
	tmp = arr[0];
	while (i < size)
	{
		if (tmp < arr[i])
		{
			tmp = arr[i];
			index = i;
		}
		i++;
	}
	return index;
}
