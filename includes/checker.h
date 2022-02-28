/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:23:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/28 15:01:03 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H

#include "list.h"

int is_empty(t_list *list);
int is_sorted(t_list *list);
char **set_action(void);
int is_action(const char *str);
int ft_strcmp(const char *str1, const char *str2);
char *ft_strdup(const char *s);

void apply(const char *str, t_list *list_a, t_list *list_b);

#endif
