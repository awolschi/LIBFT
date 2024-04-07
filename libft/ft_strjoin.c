/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:19:10 by awolschi          #+#    #+#             */
/*   Updated: 2024/04/06 16:53:57 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i1;
	int		is;

	i1 = 0;
	is = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s1[i1] != '\0')
		str[is++] = s1[i1++];
	i1 = 0;
	while (s2[i1] != '\0')
		str[is++] = s2[i1++];
	str[is] = 0;
	return (str);
}
