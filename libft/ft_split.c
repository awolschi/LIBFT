/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:08:25 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/30 18:52:47 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	**ft_split(const char *s, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[1] != '\0')
// 		i++;
// }

static int	word_count(const char *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	word;

	i = 0;
	x = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (word == 1)
		{
			if (s[i] == c)
				word = 0;
		}
		else
		{
			if (s[i] != c)
			{
				word = 1;
				x++;
			}
		}
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	char		c;
// 	const char	*s = "";
// 	int			count;

// 	c = '_';
// 	count = word_count(&c, s);
// 	printf("output: %d", count);
// 	return (0);
// }

// static int	word_count(const char *str, char c)
// {
// 	size_t	i;
// 	size_t	x;

// 	i = 0;
// 	x = 0;
// 	while (str[i++])
// 	{
// 		if (str[i] == c)
// 			x++;
// 	}
// 	return (x + 1);
// }

// void	*ft_free(char **str2, int count)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < count)
// 	{
// 		free(str2[i]);
// 		i++;
// 	}
// 	free(str2);
// 	return (0);
// }

char	*fill_word(const char *str1, int s, int e)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((e - s + 1) * sizeof(char));
	if (!word)
		return (0);
	while (s < e)
	{
		word[i] = str1[s];
		i++;
		s++;
	}
	word[i] = 0;
	return (word);
}
