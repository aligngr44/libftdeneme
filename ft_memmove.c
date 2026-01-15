#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dst, tmp, n);
	return (dst);
}
