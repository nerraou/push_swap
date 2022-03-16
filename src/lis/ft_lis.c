/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:26:16 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 12:10:13 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

int	*ft_lis(int *arr, int *len, int size)
{
	int	*length;
	int	*sub_s;
	int	*lis;
	int	prev;

	length = set_array_value(size, 1);
	if (!length)
	{
		free(arr);
		exit(1);
	}
	sub_s = set_array_value(size, 0);
	if (!sub_s)
	{
		free_all(sub_s, arr, length);
		exit(1);
	}
	check_and_set(arr, sub_s, length, size);
	prev = max_index(length, size);
	*len = length[prev];
	lis = lis_array(sub_s, arr, length, size);
	free_all(sub_s, arr, length);
	return (lis);
}
