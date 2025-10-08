/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:35:09 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/08 12:44:22 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i + ft_strlen(little) < len)
	{
		if (ft_strncmp(&big[i], little, len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
