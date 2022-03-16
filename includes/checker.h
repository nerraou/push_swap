/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 10:23:01 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/16 10:04:33 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "list.h"
# include "common.h"

int		is_empty(t_list *list);
int		is_action(const char *str);

char	**set_action(void);

char	*ft_strdup(const char *s);

void	apply(const char *str, t_list *list_a, t_list *list_b);

#endif
