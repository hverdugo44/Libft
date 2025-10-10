/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:48:33 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 18:04:50 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)ft_calloc(ft_strlen(s) + 1, 1);
	if (!cpy)
		return (NULL);
	while (s[i] != 0)
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
