/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:12:57 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/23 20:44:38 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *source, size_t len)
{
	size_t i;

	i = 0;
	
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)source;
	s = (unsigned char *)dest;
	while(i < len)
	{
		s[i] = d[i];
		i++;
	}

	return (dest);
}
