/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:04:55 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/11 15:32:17 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t1;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		t1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = t1;
	}
}
