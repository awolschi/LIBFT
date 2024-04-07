/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:28:54 by awolschi          #+#    #+#             */
/*   Updated: 2024/04/06 16:59:41 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ih;
	size_t	in;

	if (*needle == '\0')
		return ((char *)haystack);
	ih = 0;
	while (haystack[ih] != '\0' && ih < len)
	{
		in = 0;
		while (haystack[ih + in] == needle[in] && haystack[ih + in] != '\0'
			&& ih + in < len)
		{
			if (needle[in + 1] == '\0')
				return ((char *)&haystack[ih]);
			in++;
		}
		ih++;
	}
	return (NULL);
}
