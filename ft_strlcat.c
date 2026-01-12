/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:42:03 by algungor          #+#    #+#             */
/*   Updated: 2026/01/10 18:05:38 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t len = 0;
    size_t j = 0;
    while(dst[j])
        j++;
    if(size - 1 < j)
        return(j + size);
    len = j;
    while(src[i] && i < size - 1)
    {
        dst[len] = src[i];
        i++;
        len++;
    }
    dst[len] = '\0';
    return (i + j);
}
int main()
{
    char a[] = "abc";
    char s[] = "def";
    //int result;
    //size_t result =  ft_strlcat(a, s, 4);
    //printf("%s\n", a);
   // printf("%zu\n", result);
    printf("%d\n", ft_strlcat(a, s, 2));
}