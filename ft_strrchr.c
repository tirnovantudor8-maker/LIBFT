/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titudor <titudor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:29:53 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/27 18:31:09 by titudor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	size_t			i;
	int				last;

	i = 0;
	last = -1;
	a = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			last = i;
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	else if (last == -1)
		return (NULL);
	else
		return ((char *)&s[last]);
}
