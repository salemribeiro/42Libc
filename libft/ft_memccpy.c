/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:21:40 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/18 18:53:08 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void		*ft_memccpy(void *dest, const void *source, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)source;
	s = (unsigned char *)dest;
	while (i < len && d[i] != ((unsigned char)c))
	{
		if (d[i] != '\0')
			s[i] = d[i];
		else
			break ;
		i++;
	}
	return (s);
}

int			main()
{
	char *ptr;
	ptr = (char*)memccpy("salem", "ola mundo salem cabecudo", 30);
	printf("%s",ptr);

}
