/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:11:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/10 14:27:30 by nerraou          ###   ########.fr       */
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
int is_dup(int ac, char *av[]);
int ft_strcmp(const char *str1, const char *str2);

void fill_list(t_list *list, int ac, char *av[]);
void ft_exit(const char *str);
void ft_putstr(const char *str);

#endif
