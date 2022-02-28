/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:17:00 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/28 17:18:27 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void fill_list(t_list *list, int ac, char *av[])
{
	int i;

	i = 1;
	while (i < ac)
	{
		if (!is_int(av[i]))
			ft_exit("Error");
		add_back(list, atoi(av[i]));
		i++;
	}
}