/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:42:03 by algungor          #+#    #+#             */
/*   Updated: 2026/02/09 13:23:03 by algungor         ###   ########.fr       */
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
	while (j < size && dst[j])
		j++;
	if (j == size)
		return (size + ft_strlen(src));
	len = j;
	while (src[i] && (j + i + 1) < size)
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = '\0';
	return (j + ft_strlen(src));
}
#include <stdio.h>
int main()
{
	char *src = "xxx";
	char dst[] = "asd";
	printf("%d\n", ft_strlcat(dst,src,7));
	printf("%s\n", dst);
}