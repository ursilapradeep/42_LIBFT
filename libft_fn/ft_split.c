/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:13:21 by uvadakku          #+#    #+#             */
/*   Updated: 2025/07/16 14:36:39 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static	int	count_tokens(const char *s, const char d)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == d)
			i++;
		if (s[i] && s[i] != d)
			count++;
		while (s[i] && s[i] != d)
			i++;
	}
	return (count);
}

static	char	*copy_token(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	token_count;

	i = 0;
	start = 0;
	end = 0;
	token_count = count_tokens(s, c);
	result = malloc((token_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
			result[i++] = copy_token(s + start, end - start);
	}
	result[i] = NULL;
	return (result);
}
