/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_array_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:30:52 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/12 16:26:38 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lis.h"

int *set_array_value(int size, int value)
{
	int *arr;
	int i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = value;
		i++;
	}
	return (arr);
}