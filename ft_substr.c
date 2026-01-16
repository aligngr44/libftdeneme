#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	x;
	char	*c;

	c = (char *)s + start;
	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > i)
		return (ft_strdup(""));
	x = i - start;
	if (x < len)
		len = x;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, c, len);
	ptr[len] = '\0';
	return (ptr);
}
