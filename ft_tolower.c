#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	p;

	p = (unsigned char)c;
	if (p >= 'A' && p <= 'Z')
		p += 32;
	return (p);
}
