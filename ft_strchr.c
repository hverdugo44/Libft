/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:30:38 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/09 16:57:01 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int				i;
	unsigned char	*cpy;

	cpy = (unsigned char *)s;
	i = 0;
	while (cpy[i])
	{
		if (cpy[i] == (unsigned char)c)
			return ((char *)&cpy[i]);
		i++;
	}
	if (cpy[i] == (unsigned char)c)
		return ((char *)&cpy[i]);
	return (NULL);
}
