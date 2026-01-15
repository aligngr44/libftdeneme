/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:42:03 by algungor          #+#    #+#             */
/*   Updated: 2026/01/10 18:05:38 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = 0;
	j = 0;
	while (dst[j])
		j++;
	if (size - 1 < j)
		return (j + size);
	len = j;
	while (src[i] && i < size - 1)
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = '\0';
	return (i + j);
}
