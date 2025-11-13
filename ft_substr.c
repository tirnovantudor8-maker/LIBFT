/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:21:39 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/13 15:52:51 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	 char *sub;
	 size_t fullstr;

	fullstr = ft_strlen(s);
	 
	if(!s)
		return(NULL);
	if(start > fullstr)
		return(ft_strdup(""));
	
	if(start + len > fullstr)
		fullstr = ft_strlen(s);
		len = fullstr - start;
		sub = (char*)malloc(len +1);
	if(sub == 0)
		return(0);
	ft_strlcpy(sub, s + start, len + 1);
		return (sub);
}


	