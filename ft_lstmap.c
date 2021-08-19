#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	aux = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
		}
		else
		{
			ft_lstadd_back(&aux, new_list);
		}
		lst = lst->next;
	}
	return (aux);
}
