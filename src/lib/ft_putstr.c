/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:23:08 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/10 17:17:22 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(const char *str)
{
	int len;

	len = ft_strlen(str);
	write(1, str, len);
}