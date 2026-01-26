/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:22:46 by algungor          #+#    #+#             */
/*   Updated: 2026/01/26 16:22:47 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	total;
	long	s;

	s = n;
	if (s < 0)
	{
		write(fd, "-", 1);
		s = -s;
	}
	if (s > 9)
	{
		ft_putnbr_fd(s / 10, fd);
		total = (s % 10) + 48;
		ft_putchar_fd(total, fd);
	}
	else if (s <= 9)
		ft_putchar_fd(s + '0', fd);
}
