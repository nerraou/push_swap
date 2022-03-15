/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_indexof.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:19:42 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/15 20:22:49 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int ft_i_indexof(int *arr, int size, int data)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == data)
			return (i);
		i++;
	}
	return (-1);
}
