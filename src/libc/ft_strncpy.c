#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*ptr;
	size_t	count;

	ptr = dst;
	count = 0;
	while (count < len)
	{
		if (*src != '\0')
		{
			*dst = *src;
			src++;
		}
		else
			*dst = '\0';
		dst++;
		count++;
	}
	return (ptr);
}
