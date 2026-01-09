/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:10:41 by algungor          #+#    #+#             */
/*   Updated: 2026/01/07 18:12:42 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    char *d = (char *) dest;
    char *s = (char *) src;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
int main()
{
    char d[] = "asd";
    char s[] = "ccc";
    ft_memcpy(d, s, 2);
    printf("%s\n", d);
    printf("%s\n", s);
}