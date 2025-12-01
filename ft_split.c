/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titudor <titudor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:36:01 by tudortirnov       #+#    #+#             */
/*   Updated: 2025/12/01 20:45:04 by titudor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*fill_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(arr[i++]);
	free(arr);
}

static int	process_words(const char *s, char c, char **result, int words)
{
	int	i;
	int	w;
	int	start;

	i = 0;
	w = 0;
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
			return (0);
		}
		w++;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!process_words(s, c, result, words))
		return (NULL);
	result[words] = NULL;
	return (result);
}
