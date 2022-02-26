/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:23:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/26 13:44:27 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H

#include "list.h"

int ft_atoi(const char *str);
int is_int(const char *str);
int ft_isdigit(int c);
int is_empty(t_list *list);
int is_sorted(t_list *list);
char **set_action(void);
int is_action(const char *str);
int ft_strcmp(const char *str1, const char *str2);
char *ft_strdup(const char *s);

#endif
