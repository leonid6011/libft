/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:20:05 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/19 22:40:21 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destonation;
	char	*source;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	destonation = (char *)dst;
	source = (char *)src;
	while (i != n)
	{
		destonation[i] = source[i];
		i++;
	}
	return (dst);
}
