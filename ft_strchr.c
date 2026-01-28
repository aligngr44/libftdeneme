/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:15:02 by algungor          #+#    #+#             */
/*   Updated: 2026/01/28 17:18:12 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	if (x == '\0')
		return ((char *)s);
	return (0);
}
