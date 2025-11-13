/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:19:27 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/10 20:49:22 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	unsigned char *copy;
	size_t i;
	size_t size;
	
	i = 0;
	size = 0;

	while(s1[size] != '\0')
	size++;

	copy = malloc((size + 1) * sizeof(char));

	if(!copy)
		return(NULL);
	
	while(s1[i] != '\0')
	{
		s1[i] = copy[i];
		i++;
	}
	copy[i] = '\0';
	
	return(copy);	
}