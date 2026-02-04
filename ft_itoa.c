/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:23:04 by algungor          #+#    #+#             */
/*   Updated: 2026/01/26 18:17:26 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		len;
	long	x;

	len = 0;
	x = n;
	if (x <= 0)
		len++;
	if (x < 0)
		x = -x;
	while (x > 0)
	{
		x /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *ptr, long nb, int len)
{
	if (nb == 0)
		ptr[0] = '0';
	while (nb > 0)
	{
		len--;
		ptr[len] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	nb = n;
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	ft_fill(ptr, nb, len);
	return (ptr);
}
