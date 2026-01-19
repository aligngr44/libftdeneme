/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:17:07 by algungor          #+#    #+#             */
/*   Updated: 2026/01/19 15:17:09 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;

	x = (char)c;
	i = 0;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)s + i);
		i--;
	}
	if (x == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
