/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:44:34 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/10 02:28:46 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_c(char *s, char c)
{
	int	i;
	int	sw;
	int	wd;

	i = 0;
	sw = 1;
	wd = 0;
	while (s[i])
	{
		if (s[i] == c)
			sw = 1;
		else if (s[i] != c && sw == 1)
		{
			sw = 0;
			wd++;
		}
		i++;
	}
	return (wd);
}

static char	*copy(char *s, int *i, char c)
{
	int		len;
	char	*cpy;

	len = 0;
	while (s[*i] == c)
		i[0]++;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	cpy = ft_substr(s, *i, len);
	if (!cpy)
		return (NULL);
	*i += len;
	return (cpy);
}

static char	**free_mat(char **mat)
{
	int		i;
	char	**ptr;

	i = 0;
	ptr = NULL;
	while (mat[i] != NULL)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
	return (ptr);
}

static char	**wd_copy(char **mat, char *s, char c, int wd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < wd && s[j])
	{
		mat[i] = copy(s, &j, c);
		if (!mat[i])
			return (free_mat(mat));
		i++;
		j++;
	}
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		wd;
	int		i;

	i = -1;
	wd = word_c((char *)s, c);
	if (!s || wd == 0)
	{
		mat = (char **)malloc(sizeof(char *) * 1);
		if (!mat)
			return (NULL);
		mat[0] = NULL;
		return (mat);
	}
	mat = (char **)malloc(sizeof(char *) * (wd + 1));
	if (!mat)
		return (NULL);
	while (++i <= wd)
		mat[i] = NULL;
	return (wd_copy(mat, (char *)s, c, wd));
}
