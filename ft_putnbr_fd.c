/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:16:04 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/25 18:48:42 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	t;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd (n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
		else
		{
			t = '0' + n;
			write (fd, &t, 1);
		}
	}
}
