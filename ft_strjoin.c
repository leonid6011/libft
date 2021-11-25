/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:31:35 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/19 23:50:26 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		m;
	int		n;
	char	*result;

	m = 0;
	n = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		result[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		result[m + n] = s2[n];
		n++;
	}
	result[m + n] = '\0';
	return (result);
}
