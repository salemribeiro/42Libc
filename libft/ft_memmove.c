/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:30:23 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/10 15:36:57 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	char	*destination;
	char	*source;

	i = 0;
	destination = (char*)dst;
	source = (char*)src;
	if (len > 0)
	{
		while (destination[i] != '\0' && i < len)
		{
			destination[i] = source[i];
			if (source[i] == '\0')
				return (destination);
			i++;
		}
	}
	else
		return (NULL);
	return (destination);
}
