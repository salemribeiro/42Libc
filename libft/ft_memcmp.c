/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:05:36 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/15 20:03:03 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*value1;
	char	*value2;
	size_t	i;
	int		a;
	int		b;

	value1 = (char*)s1;
	value2 = (char*)s2;
	a = 0;
	b = 0;
	i = 0;
	while (i < n)
	{
		a = (int)value1[i];
		b = (int)value2[i];
		if (a != b)
		{
			if (a > b)
				return (1);
			else if (a < b)
				return (-1);
		}
		i++;
	}
	return (0);
}
