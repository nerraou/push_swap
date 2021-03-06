/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:11:40 by nerraou           #+#    #+#             */
/*   Updated: 2022/03/17 16:18:09 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include <unistd.h>
# include <stdlib.h>
# include "list.h"

int		is_int(const char *str);
int		is_sorted(t_list *list);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		is_dup(t_list *list);
int		ft_strcmp(const char *str1, const char *str2);

char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	free_2d(char **str);
void	fill_list(t_list *list_a, t_list *list_b, int ac, char *av[]);
void	ft_exit(const char *str);
void	ft_putstr(const char *str);

void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *list_a, t_list *list_b);

void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *list_a, t_list *list_b);

void	rra(t_list *list);
void	rrb(t_list *list);
void	rrr(t_list *list_a, t_list *list_b);

void	pa(t_list *head_a, t_list *head_b);
void	pb(t_list *head_a, t_list *head_b);

#endif
