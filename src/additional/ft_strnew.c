#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 == 0)
		return (NULL);
	if (!(str = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
