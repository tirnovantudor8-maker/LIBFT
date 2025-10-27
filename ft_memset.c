/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:15:49 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/10/22 16:29:10 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *point = (unsigned char *)b;
    size_t i = 0;
	while (i < len)
    {
        point[i] = (unsigned char)c;
        i++;
    }
    return (b);
}


// int main(void)
// {
//     char str[10] = "hola";

//     ft_memset(str, 'x', 3);
//     printf("%s\n", str);

//     return 0;
// }