#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *cp = "Bilgisayar";
    const char cd = 'g';

    printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));

    return 0;
}