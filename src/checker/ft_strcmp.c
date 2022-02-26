/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:51:32 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/26 13:43:38 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int ft_strcmp(const char *str1, const char *str2)
{
	int i;
	int diff;

	diff = 0;
	i = 0;
	while (str1[i] || str2[i])
	{
		diff = str1[i] - str2[i];
		if (diff != 0)
			break;
		i++;
	}
	return (diff);
}