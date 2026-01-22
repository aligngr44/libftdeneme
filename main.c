#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t i = 0;
	char a[] = "---**Selam..Dünya....**--";
	char c = ' -*.';
	char **dst = ft_split(a, c);
	printf("Orj kelime: %s\n", a);
	while(dst[i])
	{
		printf("%s\n", dst[i]);
		i++;
	}
}