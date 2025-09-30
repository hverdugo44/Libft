/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:44:34 by heverdug          #+#    #+#             */
/*   Updated: 2025/09/30 16:53:21 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	palabras(char const *s, char c)
{
	int	sw;
	int	i;
	int	x;

	i = 0;
	x = 0;
	sw = 0;
	while (s[i])
	{
		if (s[i] != c && sw == 0)
		{
			sw = 1;
			x++;
		}
		else if (s[i] == c)
			sw = 0;
		i++;
	}
	return (x);
}

static char	*free_mat(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
	return (NULL);
}

static char	*new_ptr(char **mat, int index, char *cpy, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (cpy[i] == c)
		i++;
	while (cpy[i + len] != c)
		len++;
	mat[index] = (char *)malloc(len + 1);
	if (!mat[index])
		return (free_mat(mat));
	while (cpy[i] != c)
	{
		mat[index][j] = cpy[i];
		i++;
		j++;
	}
	mat[index][j] = 0;
	return (&cpy[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	char	*cpy;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	cpy = (char *)s;
	j = 0;
	i = palabras(s, c);
	if (i == 0)
		return (NULL);
	mat = (char **)malloc(sizeof(char *) * (i + 1));
	if (!mat)
		return (NULL);
	mat[i] = NULL;
	while (j < i)
	{
		cpy = new_ptr(mat, j, cpy, c);
		if (!cpy)
			return (NULL);
		j++;
	}
	return (mat);
}
