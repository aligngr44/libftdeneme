/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:57:20 by algungor          #+#    #+#             */
/*   Updated: 2026/01/19 16:36:12 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	long int	i;
	size_t		len;
	long int	end;

	i = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		if (ft_strchr(set, s1[i]))
			i++;
	}
	while (end >= 0 && ft_strchr(set, s1[end]))
	{
		if (ft_strchr(set, s1[end]))
			end--;
	}
	if (i > end)
		ft_strdup("");
	len = end - i + 1;
	return (ft_substr(s1, i, len));
}
