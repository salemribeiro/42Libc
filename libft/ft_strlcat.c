/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:52:59 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/03 20:43:40 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	while (1 + j + i < size && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	if (size > j)
		dest[j + i] = '\0';
	return (ft_strlen(src) + j);
}
