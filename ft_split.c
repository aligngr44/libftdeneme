#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **ptr;
	size_t i = 0;
	size_t words = 0;
	size_t len;
	size_t x;
	size_t a = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		x = i;
		while (s[i] != c && s[i])
			i++;
		len = i - x;
		ptr[a] = ft_substr(s, x, len);
		a++;
	}
	ptr[a] = NULL;  
	return (ptr);
}