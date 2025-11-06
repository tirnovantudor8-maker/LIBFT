/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:27:03 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/02 19:24:04 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;
	size_t x;

	x = 0;

	if(src == NULL && dst == NULL)
		return(NULL);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	if(dst > src )
	{
		while(len > 0)
		{
			*tmp_dst++ = *tmp_src++;
			len--;
		}
	}
	else if(src > dst)
	{
		while (len > x)
		{
			*tmp_dst++ = *tmp_src++;
			len++;
		}
	}
	return(dst);
}











{
    /* declare 2 temporary pointer for src and dst */
    /* declare a counter */
    /* check if both src and dst are NULL */
    /* make dst tmp pointer equal to dst converted to char * */
    /* make src tmp pointer equal to src converted to char * */
    /* if src and dst are overlapping */
        /* loop while len is greater than 0 and copy src into dst */
    /* if src and dst are not overlapping */
        /* loop while our counter is less than len and copy src into dst */
    /* return dst */
}
