/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:11:32 by algungor          #+#    #+#             */
/*   Updated: 2026/01/10 18:27:47 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  strlcpy() işlevi, NUL ile sonlanan src dizisinden size - 1 karakterini dst'ye kopyalar ve
     sonucu NUL ile sonlandırır.*/
    #include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int i = 0;
    unsigned int len = 0;
    while(src[len])
        len++;
    if(size == 0)
        return len;
    while(src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return len;

}
int main()
{
    char dst[10];
    char src[] = "abcd";
    int size;
    size = ft_strlcpy(dst, src, 2);
    printf("%s\n", dst);
    printf("%d\n", size);
}