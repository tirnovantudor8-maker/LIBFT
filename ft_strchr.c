/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:29:18 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/05 18:27:48 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
   char cc;
   size_t i;

   cc = (char) c;
   i = 0;
   
	while(s[i] != '\0')
	{
	if(s[i] == cc)
		return((char *) &s[i]);
		i++;
	
   if (s[i] == cc) 
		return((char *) &s[i]);
		return(NULL);
	}
}


