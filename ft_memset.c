/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:15:49 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/24 23:28:48 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*point;
	size_t			i;

	point = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		point[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
