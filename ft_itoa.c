/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:36:49 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/02/09 18:38:26 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	longn;
	char	*result;
	int		len;

	len = intlen(n);
	longn = n;
	result = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (longn < 0)
	{
		result[0] = '-';
		longn = -longn;
	}
	while (--len >= 0 && result[len] != '-')
	{
		result[len] = (longn % 10) + '0';
		longn /= 10;
	}
	return (result);
}
