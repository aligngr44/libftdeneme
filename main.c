#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
void f(void *content)
{
	char *c = (char *)content;
	if(*c >= 'A' && *c <= 'Z')
		*c += 32;
}
int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *node;

	a = ft_lstnew(ft_strdup("A"));
	b = ft_lstnew(ft_strdup("B"));
	c = ft_lstnew(ft_strdup("C"));

	node = a;
	ft_lstadd_back(&a, b);
	ft_lstadd_back(&b, c);
	printf("-------ilk başta-------\n");
	while(node)
	{
		printf("%s", (char *)node -> content);
		if(node ->next != NULL)
			printf("->");
		node = node -> next;	
	}
	printf("\n");
	printf("-------fden snra-------\n");
	node = a;
	ft_lstiter(node, f);
	while(node)
	{
		printf("%s", (char *)node -> content);
		if(node ->next != NULL)
			printf("->");
		node = node -> next;	
	}
	printf("\n");


}
