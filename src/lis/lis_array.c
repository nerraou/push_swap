/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:08:16 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/02 16:08:18 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

int *lis_array(int *sub_s, int *arr, int *length, int size)
{
	int prev;
	int len;
	int *lis;

	prev = max_index(length, size);
	len = length[prev] - 1;
	lis = set_array_value(len, 0);
	if (!lis)
	{
		free_all(sub_s, arr, length);
		exit(1);
	}
	while (len >= 0)
	{
		lis[len] = arr[prev];
		prev = sub_s[prev];
		len--;
	}
	return (lis);
}