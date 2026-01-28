/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algungor <algungor@student.42istanbul.com.t+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:14:32 by algungor          #+#    #+#             */
/*   Updated: 2026/01/28 16:24:00 by algungor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof (ptr));
	if (!ptr)
		return (NULL);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}
