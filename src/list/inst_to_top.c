/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:15:37 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 12:30:26 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	inst_to_top(int pos, int size)
{
	int	h_s;

	h_s = size / 2;
	if (pos <= h_s)
		return (pos);
	else
		return (pos - size);
}
