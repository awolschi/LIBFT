/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:59:50 by awolschi          #+#    #+#             */
/*   Updated: 2024/04/06 16:57:50 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (j < i)
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[i] = '\0';
	return (str);
}
