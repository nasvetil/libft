#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!(dst) && !(src))
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n--)
	{
		*ptr_dst = *ptr_src;
		ptr_dst++;
		if ((unsigned char)c == *ptr_src)
			return ((void*)ptr_dst);
		ptr_src++;
	}
	return (NULL);
}
