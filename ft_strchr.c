/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:30:38 by heverdug          #+#    #+#             */
/*   Updated: 2025/09/30 16:54:23 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int		i;
	char	*cpy;

	cpy = (char *)s;
	i = 0;
	if (cpy[i] == c)
		return (&cpy[i]);
	i++;
	while (cpy[i - 1])
	{
		if (cpy[i] == c)
			return (&cpy[i]);
		i++;
	}
	return (NULL);
}
