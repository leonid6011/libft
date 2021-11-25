/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:25:34 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/19 22:38:50 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;
	size_t	i;

	mem = (void *)malloc(num * size);
	if (!mem)
		return (NULL);
	i = 0;
	while (num * size > i)
	{
		*((unsigned char *)mem + i) = 0;
		i++;
	}
	return (mem);
}
