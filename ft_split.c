/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:23:12 by algungor          #+#    #+#             */
/*   Updated: 2026/01/26 16:23:13 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	words;
	size_t	len;
	size_t	x;
	size_t	a;

	i = 0;
	words = 0;
	a = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		x = i;
		while (s[i] != c && s[i])
			i++;
		len = i - x;
		ptr[a] = ft_substr(s, x, len);
		if (!ptr[a])
		{
			while (a > 0)
				free(ptr[--a]);
			free(ptr);
			return (NULL);
		}
		a++;
	}
	ptr[a] = NULL;
	return (ptr);
}
