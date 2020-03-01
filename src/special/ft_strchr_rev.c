#include "libft.h"

char	*ft_strchr_rev(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr != '\0' || (int)*ptr == c)
		ptr++;
	if (*ptr != '\0' && (int)*ptr != c)
		return (ptr);
	return (NULL);
}
