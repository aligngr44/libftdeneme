/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:32:27 by algungor          #+#    #+#             */
/*   Updated: 2026/01/07 17:22:02 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *p, int c, size_t n)
{
    unsigned char *x = p; 
    while(n--)
    {
        *x = (unsigned char) c;
        x++;
    }
    return x;
} 
/*int main()
{
    char a[] = "asdewq";
    char c = 'x';
    ft_memset(a, c, 3);
    printf("%s\n", a);
}/*/
int main()
{
    int a = 0;
    ft_memset(&a, 154, 4);
    ft_memset(&a, 0, 1);
    printf("%d\n", a);
}