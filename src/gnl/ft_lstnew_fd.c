#include "libft.h"

t_list_fd	*ft_lstnew_fd(void const *cnt, size_t size, int fd)
{
	t_list_fd	*list;
	void		*new_content;

	if (!(list = (t_list_fd*)malloc(sizeof(t_list_fd))))
		return (NULL);
	if (!(cnt))
	{
		list->cnt = NULL;
		list->size = 0;
		list->fd = -1;
		list->next = NULL;
		return (list);
	}
	if (!(new_content = (void*)malloc(size)))
		return (NULL);
	ft_memcpy(new_content, cnt, size);
	list->cnt = new_content;
	list->size = size;
	list->fd = fd;
	list->next = NULL;
	return (list);
}
