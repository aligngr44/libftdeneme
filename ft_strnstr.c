/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:01:43 by algungor          #+#    #+#             */
/*   Updated: 2026/01/28 15:04:55 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t nedlen;
    
    if(needle[0] == '\0')
        return((char *)haystack);
   
   nedlen = ft_strlen(needle);
    while(i + nedlen <= len )
    {
        while(haystack[i + j] == needle[j])
        {
            j++;
            if(needle[j] == '\0')
                 return((char *)haystack + i);
        }
        i++;
        j = 0;
    }
    return(NULL);
    
}
