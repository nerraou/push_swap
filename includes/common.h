/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:11:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/28 17:18:19 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
#define COMMON_H

#include <unistd.h>
#include <stdlib.h>
#include "list.h"

int is_int(const char *str);
int ft_atoi(const char *str);
int ft_isdigit(int c);
void fill_list(t_list *list, int ac, char *av[]);
void ft_exit(const char *str);
void ft_putstr(const char *str);

#endif
