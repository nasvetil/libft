#include "libft.h"

void		*ft_memalloc_exit(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(size * sizeof(char))))
	{
		exit(EXIT_FAILURE);
		return (NULL);
	}
	ft_bzero(str, size);
	return (str);
}
