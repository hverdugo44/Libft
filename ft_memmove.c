/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:47:48 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 11:53:48 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_d(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	copy_i(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*d1;

	if (src == NULL && dest == NULL)
		return (NULL);
	s1 = (char *)src;
	d1 = (char *)dest;
	if (dest > src)
		copy_i(d1, s1, n);
	else
		copy_d(d1, s1, n);
	return (dest);
}
