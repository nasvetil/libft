#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr_lst;

	if (lst && f)
	{
		while (lst)
		{
			ptr_lst = lst->next;
			f(lst);
			lst = ptr_lst;
		}
	}
}
