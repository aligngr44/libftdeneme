#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

/* SADECE TEST İÇİN HELPER */
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
void	del(void *content)
{
	free(content);
}


int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *head;

	// node'lar için content
	a = ft_lstnew(strdup("A"));
	b = ft_lstnew(strdup("B"));
	c = ft_lstnew(strdup("C"));

	// bağlantılar
	a->next = b;
	b->next = c;
	head = a;

	// listeyi yazdır
	printf("ÖNCE:\n");
	printf("%s -> %s -> %s\n",
		(char *)head->content,
		(char *)head->next->content,
		(char *)head->next->next->content);

	// 🔴 ORTADAKİ NODE'U SİLME
	t_list *prev = head;        // A
	t_list *curr = head->next;  // B

	prev->next = curr->next;    // A -> C
	ft_lstdelone(curr, del);    // B silindi

	// listeyi tekrar yazdır
	printf("\nSONRA:\n");
	printf("%s -> %s\n",
		(char *)head->content,
		(char *)head->next->content);

	// kalanları temizle
	ft_lstdelone(head->next, del); // C
	ft_lstdelone(head, del);       // A

	return (0);
}
