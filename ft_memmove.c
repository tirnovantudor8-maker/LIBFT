/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:27:03 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/27 16:30:08 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if (d < src)
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	else if (d > src)
	{
		dest += n;
		src += n;
		while (n-- > 0)
			*(char *)--dest = *(char *)--src;
	}
	return (d);
}
