/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:12:57 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/23 21:27:19 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *source, size_t len)
{
	size_t i;

	i = 0;
	
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)source;
	s = (unsigned char *)dest;
	while(i < len)
	{
		if(d[i] != '\0')
			s[i] = d[i];
		else
			break;
		i++;
	}

	return (dest);
}
