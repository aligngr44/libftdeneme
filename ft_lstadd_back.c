#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*x;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	x = *lst;
	while (x->next != NULL)
		x = x->next;
	x->next = new;
}
