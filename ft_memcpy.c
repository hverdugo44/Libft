/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:49:21 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 11:51:28 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*d1;

	if (src == NULL && dest == NULL)
		return (NULL);
	s1 = (char *)src;
	d1 = (char *)dest;
	i = 0;
	while (n > i)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
