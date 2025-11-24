/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:42:10 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/24 16:01:02 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	unsigned int i;

	i = 0;
	
	while(s[i] != '\0')
		i++;
	write(fd, s, i);
}

// int main()
// {
// 	char *s = "pisdaa";
// 	int pula = 1;
// 	ft_putstr_fd(s, pula);
// 	return(0);
// }