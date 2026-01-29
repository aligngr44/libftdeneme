#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list *node;
	node = ft_lstnew("sea");
	printf("%s\n", (char *)node->content);
	free(node);
}