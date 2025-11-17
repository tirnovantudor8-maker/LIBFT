/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:04:32 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/16 15:19:51 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *result;
	size_t i;
	size_t x;

	i = 0;
	x = 0;
	
	if(!s1 || !s2)
		return(NULL);

	result = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 
		sizeof(char));	
		
	if(!result)
		return(NULL);

	while(s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while(s2[x])
	{
		result[i + x] = s2[x];
		x++;
	}
	result[i + x] = '\0';
	return(result);
}