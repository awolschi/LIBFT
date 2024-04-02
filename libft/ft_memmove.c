/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:42:23 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/26 21:17:58 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tpdst;
	const char	*tpsrc;
	size_t		i;

	tpdst = (char *)dst;
	tpsrc = (const char *)src;
	i = 0;
	if (tpdst == tpsrc)
		return (dst);
	if (tpdst > tpsrc)
		while (len-- > 0)
			tpdst[len] = tpsrc[len];
	else
	{
		i = 0;
		while (i < len)
		{
			tpdst[i] = tpsrc[i];
			i++;
		}
	}
	return (dst);
}
