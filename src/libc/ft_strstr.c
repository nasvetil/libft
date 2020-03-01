#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
