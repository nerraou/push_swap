/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:35:04 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/26 13:58:56 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int is_int(const char *str)
{
	int i;

	// TODO: handle -12 and +123
	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]) || str[i] != '-' || str[i] != '+')
			return (0);
		i++;
	}
	return (1);
}
