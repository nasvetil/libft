#include "libft.h"

size_t	ft_strclen(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	return (len);
}
