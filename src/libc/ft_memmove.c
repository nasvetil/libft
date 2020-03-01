#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!(dst) && !(src))
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (src > dst)
		while (len--)
			*ptr_dst++ = *ptr_src++;
	else
		while (len--)
			*(ptr_dst + len) = *(ptr_src + len);
	return (dst);
}
