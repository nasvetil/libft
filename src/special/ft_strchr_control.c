#include "libft.h"

char	*ft_strchr_control(const char *s)
{
	char	*ptr;

	ptr = (char*)s;
	while ((*ptr != '\t' && *ptr != '\n' &&
			*ptr != '\v' && *ptr != '\f' &&
			*ptr != '\r' && *ptr != '\0'))
		ptr++;
	return (ptr);
}
