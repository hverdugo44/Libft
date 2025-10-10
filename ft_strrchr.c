/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:45:22 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 17:02:10 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				size;
	unsigned char	*cpy;

	size = ft_strlen(s);
	cpy = (unsigned char *)s;
	while (size >= 0)
	{
		if (cpy[size] == (unsigned char)c)
			return ((char *)&cpy[size]);
		size--;
	}
	return (NULL);
}
