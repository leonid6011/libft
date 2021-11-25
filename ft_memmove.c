/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:22:35 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/19 22:41:47 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	else_var(size_t n, char *destonation, char *source)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		destonation[i] = source[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*destonation;
	char	*source;

	destonation = (char *)dst;
	source = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (destonation > source)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			destonation[i] = source[i];
			i--;
		}
	}
	else
		else_var(n, destonation, source);
	return (dst);
}
