#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>

char	deneme(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			write(1, &s[i], 1);
			i++;
		}
		else 
		{
			ft_putendl_fd("küçük harf yok", 2);
			i++;
		}
		
	}
}

int	main(void)
{
	int fd;
	// fd = open("deneme.txt", O_RDWR | O_APPEND);
	// fd = 2;
	char s[] = "MerHaBa";
	printf("%s", deneme(s));
}