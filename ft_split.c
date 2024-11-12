/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezekaj <ezekaj@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:56:23 by ezekaj            #+#    #+#             */
/*   Updated: 2024/11/11 17:38:37 by ezekaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **wordv)
{
	int	i;

	i = 0;
	while (wordv[i])
	{
		free(wordv[i]);
		i++;
	}
	free(wordv);
}

static char	*fill(const char *s, char delimiter, int *start)
{
	char	*word;
	int		end;

	end = *start;
	while (s[end] != delimiter && s[end])
		end++;
	word = malloc(end - *start + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s + *start, end - *start);
	word[end - *start] = 0;
	*start = end;
	return (word);
}

static size_t	count_words(const char *s, char delimiter)
{
	size_t	words;
	bool	isword;

	words = 0;
	if (!s)
		return (words);
	while (*s)
	{
		isword = false;
		while (*s == delimiter && *s)
			++s;
		while (*s != delimiter && *s)
		{
			if (!isword)
			{
				++words;
				isword = true;
			}
			++s;
		}
		isword = false;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**wordv;
	size_t	words;
	size_t	i;
	int		start;

	words = 0;
	start = 0;
	i = 0;
	words = count_words(s, c);
	wordv = ft_calloc((words + 1), sizeof(char *));
	if (!wordv)
		return (NULL);
	while (s[start])
	{
		while (s[start] == c && s[start])
			start++;
		if (!s[start])
			break ;
		wordv[i] = fill(s, c, &start);
		if (wordv[i] == NULL)
			return (ft_free(wordv), NULL);
		i++;
	}
	return (wordv);
}

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split("     ", ' ');
// 	i = 0;
// 	while (*(res + i))
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
