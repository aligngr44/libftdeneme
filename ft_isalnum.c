/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:06:24 by algungor          #+#    #+#             */
/*   Updated: 2026/01/07 15:09:36 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalnum(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else if(c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
int main()
{
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('?'));
    printf("%d\n", ft_isalnum('2'));
}