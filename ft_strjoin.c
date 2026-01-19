/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:48:36 by algungor          #+#    #+#             */
/*   Updated: 2026/01/19 15:11:58 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	size_t	ts;
	char	*ptr;

	i = ft_strlen(s1);
	x = ft_strlen(s2);
	ts = i + x;
	ptr = malloc(ts + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, i);
	ft_memcpy(ptr + i, s2, x + 1);
	return (ptr);
}
