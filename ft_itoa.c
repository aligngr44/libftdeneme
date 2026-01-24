#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		x;
	int		len;

	i = -1;
	x = n;
	len = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n <= 0)
		len++;
	if (n == 0)
		return (ft_strdup("0"));
	if (x < 0)
		x = -x;
	while (x != 0)
	{
		x = x / 10;
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		n *= i;
		ptr[0] = '-';
	}
	while (n > 0)
	{
		len--;
		ptr[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (ptr);
}
