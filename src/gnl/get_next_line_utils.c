/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:11:52 by nerraou           #+#    #+#             */
/*   Updated: 2022/01/31 10:44:43 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_indexof(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

size_t	ft_strclen(const char *s, int param)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != param)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dst;

	len = ft_strclen(s, '\0');
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*str;

	i = 0;
	s1_len = ft_strclen(s1, '\0');
	s2_len = ft_strclen(s2, '\0');
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	while (s2[i] && s2[i] != '\n')
	{
		str[s1_len] = s2[i];
		s1_len++;
		i++;
	}
	str[s1_len] = '\0';
	return (str);
}
