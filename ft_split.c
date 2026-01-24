#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	words;
	size_t	len;
	size_t	x;
	size_t	a;

	i = 0;
	words = 0;
	a = 0;
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
		if (!s[i])
			break ;
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
