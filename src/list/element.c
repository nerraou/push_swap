/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:21:50 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/10 14:16:04 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static int ft_max(int n1, int n2)
{
	int num1;
	int num2;
	num1 = ft_abs(n1);
	num2 = ft_abs(n2);
	if (num1 > num2)
		return (num1);
	return (num2);
}

int element(int *arr)
{
	int elem;

	if (arr[0] * arr[1] < 0)
		elem = ft_abs(arr[0]) + ft_abs(arr[1]);
	else
	{
		elem = ft_min(arr[0], arr[1]) + (ft_max(arr[0], arr[1]) - ft_min(arr[0], arr[1]));
	}
	return (elem);
}