/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:45:22 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/08 11:48:11 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*cpy;

	cpy = (char *)s;
	size = ft_strlen(cpy);
	while (size >= 0)
	{
		if (cpy[size] == c)
			return (&cpy[size]);
		size--;
	}
	return (NULL);
}
