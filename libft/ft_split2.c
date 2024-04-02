/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 18:53:13 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/30 18:57:59 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	*ft_free(char **str2, int count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		free(str2[i]);
		i++;
	}
	free(str2);
	return (0);
}