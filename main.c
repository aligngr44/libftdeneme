#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "Merhaba";
	char *dst = ft_substr(a, 4, 4);
	printf("Orj kelime: %s\n", a);
	printf("son kelime: %s\n", dst);
	free(dst);
}