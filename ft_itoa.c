/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:35:42 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/18 17:43:48 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int int_len(long n);

char *ft_itoa(int n)
{	
	long nbr;
	int len;
	char *str;
	int i;
		
	nbr = n;
	len = int_len(nbr);
	str = malloc(len + 1);
	i = len - 1;

	if(!str)
		return NULL;

	str[len] = '\0';

	if(nbr == 0)
	{
		str[0] = '0';
		return (str);
	}

	if (nbr < 0)
	nbr = -nbr;
 
	while(nbr > 0)
	{
		str[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}

	if (n < 0)
    	str[0] = '-';

		return (str);
}

static int int_len(long n)
{
	int len = 0;

	if (n <= 0) 
    	len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
 	return (len);
}