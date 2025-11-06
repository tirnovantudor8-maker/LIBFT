/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:02:32 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/02 18:10:16 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void    ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int    ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memset(void *b, int c, size_t len);
size_t ft_strlen(const char *s);






#endif