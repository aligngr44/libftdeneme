/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:14:51 by algungor          #+#    #+#             */
/*   Updated: 2026/01/19 15:18:14 by algungor         ###   ########.fr       */
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
