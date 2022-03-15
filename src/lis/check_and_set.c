/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:24:19 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/15 15:53:12 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

void check_and_set(int *arr, int *sub_s, int *length, int size)
{
	int i;
	int j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (arr[j] < arr[i] && length[i] < 1 + length[j])
			{
				length[i] = 1 + length[j];
				sub_s[i] = j;
			}
			j++;
		}
		i++;
	}
}