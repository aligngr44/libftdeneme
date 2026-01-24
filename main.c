#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int i = 0;
	char s[] = " bilo tam bir göt ";
	char c = ' ';
	char **dst = ft_split(s, c);
	while (dst[i])
	{
		printf("%s\n", dst[i]);
		i++;
	}
}