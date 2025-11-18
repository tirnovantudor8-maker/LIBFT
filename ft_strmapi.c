/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:19:07 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/18 18:05:46 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *new;
	size_t len;
	
	i = 0;
	len = ft_strlen(s);

	if(!new)
		return(NULL);
	
	if(!s)
		return(NULL);
	
	new = malloc((len + 1) * sizeof(char));
}