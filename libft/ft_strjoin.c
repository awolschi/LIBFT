/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:19:10 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/25 16:53:03 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i1;
	size_t	ip;

	i1 = 0;
	ip = 0;
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s1[i1] != '\0')
		ptr[ip++] = s1[i1++];
	i1 = 0;
	while (s2[i1] != '\0')
		ptr[ip++] = s2[i1++];
	ptr[ip] = 0;
	return (ptr);
}
