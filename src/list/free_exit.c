/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:53:09 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/12 14:21:26 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void free_exit(t_list **list_a, t_list **list_b, int exit_code)
{
	if (*list_a != NULL)
		list_del(list_a);
	if (*list_b != NULL)
		list_del(list_b);
	exit(exit_code);
}
