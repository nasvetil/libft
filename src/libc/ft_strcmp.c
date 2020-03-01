#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	while (*ptr_s1 == *ptr_s2 && *ptr_s1 != '\0' && *ptr_s2 != '\0')
	{
		ptr_s1++;
		ptr_s2++;
	}
	return ((int)*ptr_s1 - (int)*ptr_s2);
}
