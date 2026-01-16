#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t i;
	i = ft_strlen(s);
	char *ptr;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, (i + 1));
	return (ptr);
}