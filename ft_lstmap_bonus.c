/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:04:14 by heverdug          #+#    #+#             */
/*   Updated: 2025/10/12 19:17:14 by heverdug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;
	void	*content;

	if (!f || !del || !lst)
		return (NULL);
	content = f(lst->content);
	new = ft_lstnew(content);
	if (!new)
	{
		del(content);
		return (NULL);
	}
	t = new;
	while (lst->next)
	{
		lst = lst->next;
		content = f(lst->content);
		t = ft_lstnew(content);
		if (t == NULL)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, t);
	}
	return (new);
}
