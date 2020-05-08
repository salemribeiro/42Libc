/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:22:51 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/07 23:09:38 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *source, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !source)
		return ;
	i = 0;
	d = (unsigned char *)source;
	s = (unsigned char *)dest;
	while (i < len)
	{
		s[i] = d[i];
		i++;
	}
	return (dest);
}
