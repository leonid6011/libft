/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:32:42 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/19 22:35:46 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		*((unsigned char *)destination + i) = (unsigned char)c;
		i++;
	}
	return (destination);
}
