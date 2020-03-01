#include "libft.h"

void	ft_lstadd_fd(t_list_fd **alst, t_list_fd *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
