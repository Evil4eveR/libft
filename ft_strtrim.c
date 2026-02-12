/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:38:44 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/02/09 15:22:25 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;

	if (s == NULL || set == NULL)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	i = ft_strlen(s);
	while (i && ft_strchr(set, *(s + i)))
		i--;
	return (ft_substr(s, 0, i + 1));
}
