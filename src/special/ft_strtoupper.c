#include "libft.h"

void	ft_strtoupper(char **str)
{
	char	*ptr_str;
	size_t	str_len;
	size_t	i;

	ptr_str = *str;
	str_len = ft_strlen(*str);
	i = 0;
	while (i < str_len)
	{
		*ptr_str = ft_toupper(*ptr_str);
		ptr_str++;
		i++;
	}
}
