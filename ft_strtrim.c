/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:34:56 by heverdug          #+#    #+#             */
/*   Updated: 2025/09/30 16:55:01 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*inicio(char const *s, char const *set)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (&s1[i]);
		i++;
	}
	return (NULL);
}

static char	*fin(char const *s, char const *set)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (&s1[i + 1]);
		i--;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*str;
	int		i;

	i = 0;
	start = inicio(s1, set);
	if (!start)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	end = fin(s1, set);
	while (&start[i] != end)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	while (--i != -1)
		str[i] = start[i];
	return (str);
}
