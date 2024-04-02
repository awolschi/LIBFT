/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:01:14 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/25 18:04:34 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	if (ptr != 0)
		ft_bzero(ptr, size * count);
	return (ptr);
}

// ueberfluessig?
// 	return (0);
// if (ptr == 0)
// 	return (ptr);