/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tudortirnovan <tudortirnovan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:36:01 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/11/18 17:44:21 by tudortirnov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_word(const char *s, char c);
static char *fill_word(const char *s, int start, int end);
static void ft_free(char **arr, int count);

char **ft_split(const char *s, char c)
{
char **result;
int words;
int i;
int start;
int w;

i = 0;
w = 0;

if (!s)
     return NULL;

words = count_word(s, c);
result = malloc((words + 1) * sizeof(char *));
if (!result)
    return NULL;

while (s[i] && w < words)
{
	while (s[i] && s[i] == c)
    	i++;
	start = i;

	while (s[i] && s[i] != c)
		i++;
	result[w] = fill_word(s, start, i);
	if (!result[w])
	{
		ft_free(result, w);
		return NULL;
	}
	w++;
}
result[w] = NULL;
return result;
}

static int count_word(const char *s, char c)
{
	int count;
	int i;
	
	count = 0;
	i = 0;
	
while(s[i])
{
	while(s[i] && s[i] == c)
		i++;
	if(s[i] && s[i] != c)	
	{
		count++;
		while(s[i] && s[i] != c)
		i++;
	}
}
return (count);
}

static char *fill_word(const char *s, int start, int end)
{
int i;
char *word;
i = 0;

word = malloc((end - start + 1) * sizeof(char));

if(!word)
	return(NULL);
while( start < end)
{
    word[i] = s[start];
    i++;
    start++;
}
word[i] = '\0';
return(word);
}

static void ft_free(char **arr, int count)
{
	int i = 0;
	while (i < count)
	{
    	free(arr[i]);
	i++;
	}
	free(arr);
}

