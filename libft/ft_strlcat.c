/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:31:47 by awolschi          #+#    #+#             */
/*   Updated: 2024/04/06 16:55:13 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsts)
{
	size_t	id;
	size_t	is;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	id = lend;
	is = 0;
	if (lend < dsts - 1 && dsts > 0)
	{
		while (src[is] && lend + is < dsts - 1)
		{
			dst[id] = src[is];
			id++;
			is++;
		}
		dst[id] = 0;
	}
	if (lend >= dsts)
		lend = dsts;
	return (lend + lens);
}
