#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr_str;
	size_t	count;

	if (!(s))
		return (NULL);
	if (!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ptr_str = str;
	count = 0;
	s = &s[start];
	while (count < len && *s != '\0')
	{
		*str = *s;
		str++;
		s++;
		count++;
	}
	*str = '\0';
	return (ptr_str);
}
