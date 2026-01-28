#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "Hello";
	int c = 'l';
	printf("%s\n", ft_strchr(s, c));
	
}