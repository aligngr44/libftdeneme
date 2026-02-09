/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:23:12 by algungor          #+#    #+#             */
/*   Updated: 2026/02/09 12:56:36 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static void	free_all(char **ptr, size_t a)
{
	while (a > 0)
		free(ptr[--a]);
	free(ptr);
}

static int	fill_ptr(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	x;
	size_t	a;

	i = 0;
	a = 0;
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
			return (free_all(ptr, a), 0);
		a++;
	}
	ptr[a] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	if (!fill_ptr(ptr, s, c))
		return (NULL);
	return (ptr);
}
#include <stdio.h>
int main()
{
	char *s = "istanbul,türkiye";
	char c = ',';
	char **ptr;
	int i = 0;
	ptr = ft_split(s, c);
	while(ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
}