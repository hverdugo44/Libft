/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:01:59 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/08 12:09:23 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cpy;
	size_t	i;

	cpy = (char *)s;
	i = 0;
	while (cpy[i] && i < n)
	{
		if (cpy[i] == c)
			return ((void *)&cpy[i]);
		i++;
	}
	return (NULL);
}
