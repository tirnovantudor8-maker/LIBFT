/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:21:32 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/16 18:25:36 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
size_t start;
size_t end;
size_t len;
char *trimmed;

if(!s1)
	return(NULL);

if(!set)
	return(NULL);

	start = 0;
	end = ft_strlen(s1) - 1;

while (s1[start] && in_set(s1[start], set))
	start++;
while (end > start && in_set(s1[end], set))
    end--;
	
len = end - start +1;

trimmed = (char *)malloc(len +1);

if(!trimmed)
	return(NULL);

ft_strlcpy(trimmed, s1 + start, len + 1);

return(trimmed);
}

static int in_set(char c, const char *set)
{
	size_t i;
	
	i = 0;
	
	while(set[i])
	{
		if(c == set[i])
			return(1);
		i++;
	}
	return(0);
}