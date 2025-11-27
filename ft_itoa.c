/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:35:42 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/24 20:46:07 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n);
static void	fill_str(long nbr, char *str, int len);

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	len = int_len(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	fill_str(nbr, str, len);
	if (n < 0)
		str[0] = '-';
	return (str);
}

static int	int_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(long nbr, char *str, int len)
{
	int	i;

	i = len - 1;
	if (nbr == 0)
	{
		str[0] = '0';
		return ;
	}
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		i--;
		nbr /= 10;
	}
}
