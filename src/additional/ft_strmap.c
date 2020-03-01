#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ptr_str;
	int		len_str;

	if (!(s) || !(f))
		return (NULL);
	len_str = ft_strlen(s);
	if (!(str = (char*)malloc((len_str + 1) * sizeof(char))))
		return (NULL);
	ptr_str = str;
	while (*s != '\0')
	{
		*str = f(*s);
		str++;
		s++;
	}
	*str = '\0';
	return (ptr_str);
}
