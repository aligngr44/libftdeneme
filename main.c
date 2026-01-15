#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char cp[] = "Bilgisayar";
    const char cd = 'g';
    char *x = ft_memchr(cp, 'a', 10);
    printf("%p", x);

    return 0;
}