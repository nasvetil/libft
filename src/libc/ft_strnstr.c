#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack != '\0' && i < len)
	{
		j = 0;
		while (haystack[j] == needle[j] && haystack[j] != '\0' &&
				needle[j] != '\0' && (i + j) <= len)
			j++;
		if ((i + j) <= len && needle[j] == '\0')
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
