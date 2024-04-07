/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:42:48 by awolschi          #+#    #+#             */
/*   Updated: 2024/04/07 15:08:47 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

int	fill_word(char **str, const char *s, char c, size_t *word_index)
{
	size_t	len;
	int		i;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			len++;
			i++;
		}
		if (len)
		{
			str[*word_index] = malloc((len + 1) * sizeof(char));
			if (str[*word_index] == NULL)
				return (1);
			ft_strlcpy(str[*word_index], &s[i - len], len + 1);
			str[*word_index][len] = '\0';
			*word_index = *word_index + 1;
		}
	}
	return (0);
}

static int	word_count(const char *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	words;

	i = 0;
	x = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (x == 1)
		{
			if (s[i++] == c)
				x = 0;
		}
		else
		{
			if (s[i++] != c)
			{
				x = 1;
				words++;
			}
		}
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	word_index;
	char	**str;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	word_index = 0;
	str = malloc((words + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	str[words] = NULL;
	if (fill_word(str, s, c, &word_index))
	{
		ft_free(str, word_index + 1);
		return (NULL);
	}
	return (str);
}
