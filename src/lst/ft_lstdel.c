#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr_next;

	if (alst && del)
	{
		while (*alst)
		{
			ptr_next = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			(*alst) = ptr_next;
		}
	}
	(*alst) = NULL;
}
