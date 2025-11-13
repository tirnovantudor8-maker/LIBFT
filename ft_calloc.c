/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:18:18 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/10 19:45:21 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	size_t i;
	
	i = 0;
	tmp = malloc(count* size);
	
	if(!tmp)
		return(NULL);
	
	while(i < count * size);
	{
		tmp[i] = 0;
		i++;
	}
	return(tmp);
}