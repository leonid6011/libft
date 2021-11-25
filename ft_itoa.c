/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:00:07 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/23 22:07:56 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(long n)
{
	int	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static unsigned int	del_creat(int count)
{
	int				i;
	unsigned int	del;

	del = 1;
	i = 0;
	while (i != count - 1)
	{
		del = del * 10;
		i++;
	}
	return (del);
}

char	*minus(char *result, int n, int count, unsigned int del)
{
	int	i;
	int	p;

	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		i = 1;
		n = -n;
	}
	while (i != count)
	{
		p = n / del;
		n = n % del;
		del = del / 10;
		result[i] = p + '0';
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int				count;
	char			*result;
	unsigned int	del;

	count = count_nbr(n);
	del = del_creat(count);
	if (n < 0)
		count++;
	result = (char *)malloc(sizeof(char) * (count + 1));
	if (result == NULL)
		return (NULL);
	result = minus(result, n, count, del);
	return (result);
}
