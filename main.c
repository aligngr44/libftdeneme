#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "---**Selam..Dünya....**--";
	char b[] = "*-Selam.";
	char *dst =	ft_strtrim(a, b);
	printf("Orj kelime: %s\n", a);
	printf("son kelime: %s\n", dst);
	free(dst);
}