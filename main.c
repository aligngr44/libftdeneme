#include "libft.h"
#include <fcntl.h> //open için
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int fd;
	 fd = open("deneme.txt", O_RDWR | O_APPEND);
	// fd = 2;
	long n = -2147483648;
	ft_putnbr_fd(n, 1);
}