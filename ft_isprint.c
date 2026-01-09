/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:30:41 by algungor          #+#    #+#             */
/*   Updated: 2026/01/07 15:31:54 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}
int main()
{
    printf("%d\n", ft_isprint('a'));
    printf("%d\n", ft_isprint('?'));
    printf("%d\n", ft_isprint('\n'));
}