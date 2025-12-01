/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titudor <titudor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:35:42 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/29 21:10:41 by titudor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_memcal(int n);

char	*ft_itoa(int n)
{
	int		mem_space;
	char	*result;
	int		flag;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	flag = 0;
	mem_space = ft_memcal(n);
	result = malloc(mem_space + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		flag = -1;
		n = n * -1;
	}
	result[mem_space] = '\0';
	while (--mem_space > -1)
	{
		result[mem_space] = (n % 10) + 48;
		n = n / 10;
	}
	if (flag == -1)
		result[0] = '-';
	return (result);
}

static int	ft_memcal(int n)
{
	int	sigfig;

	sigfig = 1;
	if (n < 0)
	{
		n = n * -1;
		sigfig++;
	}
	while (n > 9)
	{
		n = n / 10;
		sigfig++;
	}
	return (sigfig);
}
