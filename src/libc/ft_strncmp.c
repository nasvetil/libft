#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 1;
	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*ptr_s1 == *ptr_s2 && *ptr_s1 != '\0' && *ptr_s2 != '\0' && i < n)
	{
		ptr_s1++;
		ptr_s2++;
		i++;
	}
	return ((int)*ptr_s1 - (int)*ptr_s2);
}
