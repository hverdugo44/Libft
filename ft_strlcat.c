/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:54:03 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 17:33:19 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srcs;
	size_t	dests;
	size_t	i;

	i = 0;
	srcs = ft_strlen(src);
	dests = ft_strlen(dest);
	if (size == 0)
		return (srcs);
	if (size <= dests)
		return (size + srcs);
	else
		srcs += dests;
	while (src[i] && dests + i < size - 1)
	{
		dest[i + dests] = src[i];
		i++;
	}
	dest[i + dests] = 0;
	return (srcs);
}
