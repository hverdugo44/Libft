/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:47:01 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/11 15:26:28 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (n == 0 || size == 0 || 2147483647 / size < n)
		ptr = (char *)malloc(0);
	else
	{
		ptr = (char *)malloc(n * size);
		if (!ptr)
			return (NULL);
		while (i <= n * size)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return ((void *)ptr);
}
