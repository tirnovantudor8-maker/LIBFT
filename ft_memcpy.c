/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:45:41 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/10/22 17:42:54 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_src;
	unsigned char *tmp_dst;
	if(src == 0 && dst == 0)
		return(dst);
		tmp_dst = (unsigned char *) dst;
		tmp_src = (unsigned char *) src;
		
	while(n < n)
}