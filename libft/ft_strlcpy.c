/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:55:07 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/21 14:33:26 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsts)
{
	size_t	i;

	i = ft_strlen(src);
	if (i + 1 < dsts)
		ft_memcpy(dst, src, i + 1);
	else if (dsts != '\0')
	{
		ft_memcpy(dst, src, dsts -1);
		dst[dsts -1] = '\0';
	}
	return (i);
}
