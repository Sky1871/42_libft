#include "libft.h"

static void	ft_lstdel(t_list **lst)
{
	if (*lst)
	{
		ft_lstdel(&(*lst)->next);
		free(*lst);
		*lst = NULL;
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (lst->content)
			del(lst->content);
		ft_lstdel(&lst);
	}
}
