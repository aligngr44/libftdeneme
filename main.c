#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "abcde";
	char a[] = "abcde";
	printf("%s\n", ft_memmove(s + 2, s, 3));
	printf("%s\n", memmove(a + 2, a, 3));
	
}