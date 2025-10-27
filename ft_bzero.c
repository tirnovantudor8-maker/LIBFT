/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:33:59 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/10/22 16:42:37 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_bzero(void *s, size_t n)
{
	unsigned char *point = (unsigned char *)s;
	size_t i = 0;
	while(i < n)
	{
		point[i] = 0;
		i++;
	}
}
