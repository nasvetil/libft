#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*str;

	ptr = (char*)s;
	str = NULL;
	while (*ptr != '\0' || (int)*ptr == c)
	{
		if ((int)*ptr == c)
			str = (char*)ptr;
		if (*ptr == '\0')
			return (str);
		ptr++;
	}
	return (str);
}
