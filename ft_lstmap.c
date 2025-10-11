#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;
	t_list	*cpy;

	cpy = lst;
	if (!f || !del)
		return (NULL);
	new = NULL;
	while (cpy)
	{
		t = ft_lstnew(f(cpy->content));
		if (t == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, t);
		cpy = cpy->next;
	}
	return (new);
}
