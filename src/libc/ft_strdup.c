#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	while (len >= 0)
	{
		ptr[i] = s1[i];
		i++;
		len--;
	}
	return (ptr);
}
