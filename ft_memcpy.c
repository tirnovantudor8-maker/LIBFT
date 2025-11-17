/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:45:41 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/17 00:21:09 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_src;
	unsigned char *tmp_dst;
<<<<<<< HEAD
	if(src == 0 && dst == 0)
		return(dst);
		tmp_dst = (unsigned char *) dst;
		tmp_src = (unsigned char *) src;
		
	while(n < n)
=======
	size_t x;
	
	x = 0;
	
	if(src == NULL && dst == NULL)
		return(NULL);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
		
	while(x < n)
	{
		*tmp_dst++ = *tmp_src++;
		x++;
	}
	return(dst); 84e8d47 (second part)
}