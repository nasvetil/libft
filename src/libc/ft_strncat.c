#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;

	ptr_s1 = (char*)s1;
	ptr_s2 = (char*)s2;
	while (*ptr_s1 != '\0')
		ptr_s1++;
	while (*ptr_s2 != '\0' && n--)
	{
		*ptr_s1 = *ptr_s2;
		ptr_s1++;
		ptr_s2++;
	}
	*ptr_s1 = '\0';
	return ((char*)s1);
}
