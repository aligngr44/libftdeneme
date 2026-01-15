#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    
	unsigned char	x;
    unsigned char *t = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (*t == x)
			return (t);
		s++;
	}
	if (x == '\0')
		return (t);
	return (0);
}
