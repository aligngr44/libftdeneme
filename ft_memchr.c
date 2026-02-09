/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:14:51 by algungor          #+#    #+#             */
/*   Updated: 2026/02/09 12:52:32 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (*t == x)
			return (t);
		t++;
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	int a[5] = {0, 1, 2, 3, 4};

int *p = ft_memchr(a, 4, 20);
if (p)
    printf("Bulundu: %d\n", *p);
else
    printf("Bulunamadı\n");

}