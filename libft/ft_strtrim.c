/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:44:18 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/26 18:16:55 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char const *set, char const c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(set);
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	is;
	size_t	ie;

	is = 0;
	while (ft_checkset(set, s1[is]))
		is++;
	ie = ft_strlen(s1) - 1;
	if (is != ie + 1)
		while (ft_checkset(set, s1[ie]))
			ie--;
	return (ft_substr(s1, is, ie - is + 1));
}
