/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:51:28 by awolschi          #+#    #+#             */
/*   Updated: 2024/03/27 18:05:48 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_itoa(int n);
static int	ft_len(int n);
char		*ft_edgecases(int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	tmp;
	size_t	i;

	str = 0;
	tmp = ft_len(n);
	i = ft_len(n);
	if ((n == -2147483648) || (n == 0))
		return (str = ft_edgecases(n));
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		str[i - 1] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	str[tmp] = '\0';
	return (str);
}

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_edgecases(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (0);
}
