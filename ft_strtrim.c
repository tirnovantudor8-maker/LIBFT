/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titudor <titudor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:21:32 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/27 18:35:42 by titudor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while (length > 0 && ft_strchr(set, s1[length - 1]))
		length--;
	return (ft_substr(s1, 0, length));
}
