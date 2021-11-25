/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:10:23 by echrysta          #+#    #+#             */
/*   Updated: 2021/10/21 19:17:07 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char ch, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	first;
	size_t	last;

	if (s1 == NULL)
		return (NULL);
	first = 0;
	while (s1[first] && check(s1[first], set) == 1)
		first++;
	last = ft_strlen(s1);
	while (last > first && check(s1[last - 1], set))
		last--;
	result = (char *)malloc(sizeof(*s1) * (last - first + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (first < last)
	{
		result[i] = s1[first];
		i++;
		first++;
	}
	result[i] = '\0';
	return (result);
}
