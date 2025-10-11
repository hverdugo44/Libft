#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t1;

	if (!*lst)
		return ;
	while (*lst)
	{
		t1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = t1;
	}
	(*lst) = NULL;
}
