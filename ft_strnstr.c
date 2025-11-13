/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:21:21 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/08 15:18:16 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnst(const char *haystack, const char *needle, size_t len)
{
size_t i;
size_t j;

i = 0;
j = 0;

	if(haystack == 0 && needle == 0)
		return(NULL);
	
	while(haystack[i] != '\0' && i < len)
	{
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			if(needle[j == '\0'])
			j++;
		}
		i++;
	}
	return(NULL);
}





		
}












// char *ft_strnst(const char *haystack, const char *needle, size_t len)
// {
// 	char *a = "helo";
// 	œprintf("test");
// 	return (a);


	
// }





int main()
{
	const char *haystack = "abc";
	const char *needle = "bc";
	size_t len = 5;
	char *output;
	output = ft_strnst(haystack, needle, len);
	return(0);
	
}