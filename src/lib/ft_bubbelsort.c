/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubbelsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:00:33 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/15 20:34:49 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void ft_bubbelsort(int *arr, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}