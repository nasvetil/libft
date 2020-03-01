#include "libft.h"

char	*ft_strchr_null(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr != '\0' || (int)*ptr == c)
	{
		if ((int)*ptr == c)
			return (ptr);
		ptr++;
	}
	return (ptr);
}
