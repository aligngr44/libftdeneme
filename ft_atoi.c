/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:14:36 by algungor          #+#    #+#             */
/*   Updated: 2026/01/19 15:14:38 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	b;

	i = 0;
	x = 0;
	b = 1;
	while ((str[i] >= 9 && str[i] < 13) || (str[i] == 32))
		i++;
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			b *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x *= 10;
		x += (str[i] - 48);
		i++;
	}
	x = x * b;
	return (x);
}
