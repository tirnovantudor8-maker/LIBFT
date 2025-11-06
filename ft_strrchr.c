/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:29:53 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/06 19:36:03 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)

{
	char cc;
	size_t i;
	char *last 
 
	cc = (char) c;
	i = 0;
	last= -1;
	
	 while(s[i] != '\0')
	 {
	 	if(s[i] == cc)
			 return((char *) &s[i]);
		 i++;
	 }
	if (s[i] == cc) 
		 return((char *) &s[i]);
		 
	if(last)
		return(last);
	
	return(NULL);
 }
 