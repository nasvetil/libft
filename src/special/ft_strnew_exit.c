#include "libft.h"

char	*ft_strnew_exit(size_t size)
{
	char	*str;

	if (size + 1 == 0)
	{
		exit(EXIT_FAILURE);
		return (NULL);
	}
	if (!(str = (char*)malloc((size + 1) * sizeof(char))))
	{
		exit(EXIT_FAILURE);
		return (NULL);
	}
	ft_bzero(str, size + 1);
	return (str);
}
