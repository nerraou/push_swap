/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:17:36 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 15:10:46 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "lis.h"

void	set_map(t_list *list_a, t_list *list_b)
{
	int	*map;

	map = (int *)malloc(sizeof(int) * list_a->size);
	if (!map)
		return ;
	map = list_to_array(list_a);
	if (!map)
	{
		free(map);
		free_exit(&list_a, &list_b, 1, "");
	}
	ft_bubbelsort(map, list_a->size);
	map_values(list_a, map);
}
