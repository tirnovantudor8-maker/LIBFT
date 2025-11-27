/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:03:52 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/24 23:31:09 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	write (fd, "\n", 1);
}

// int main()
// {
// 	char *s = "tudor";
// 	int blabla = 1;
// 	ft_putendl_fd(s, blabla);
// 	return(0);
// }