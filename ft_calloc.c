/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:53:05 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/02/09 18:54:53 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
		return (malloc(0));
	ptr = (void *)malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
