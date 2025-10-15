/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:04:14 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/13 00:23:08 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;
	void	*content;

	new = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		t = ft_lstnew(content);
		if (t == NULL)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, t);
		lst = lst->next;
	}
	return (new);
}
