#include "libft.h"
#include <stdio.h>
// #include <string.h>

int main()
{
    t_list *a = ft_lstnew(ft_strdup("a"));
    t_list *b = ft_lstnew(ft_strdup("b"));
    t_list *c = ft_lstnew(ft_strdup("c"));
    t_list *d = ft_lstnew(ft_strdup("d"));
    t_list *head = a;
    a->next = b;
    b ->next = c;
    c -> next = NULL;
    t_list *tmp = head;
    ft_lstadd_front(&tmp, d);
    while(tmp)
    {
        printf("%s", (char *)tmp -> content);
            if(tmp->next)
                printf("->");
        tmp = tmp ->next;
    }
    printf("\n");
    tmp = d;
    d -> next = a;
    a -> next = c;
    c -> next = NULL;
    ft_lstdelone(b, free);
     while(tmp)
    {
        printf("%s", (char *)tmp -> content);
            if(tmp->next)
                printf("->");
        tmp = tmp ->next;
}
printf("\n");
ft_lstclear(&head, free);
ft_lstclear(&d, free);

}
