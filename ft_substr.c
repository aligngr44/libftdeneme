/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:17:05 by algungor          #+#    #+#             */
/*   Updated: 2026/02/05 13:59:13 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	x;
	char	*c;

	c = (char *)s + start;
	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > i)
		return (ft_strdup(""));
	x = i - start;
	if (x < len)
		len = x;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, c, len);
	ptr[len] = '\0';
	return (ptr);
}
