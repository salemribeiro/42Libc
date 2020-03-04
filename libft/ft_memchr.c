/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:07:55 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/04 17:29:23 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *source, int caracter, size_t n)
{
	size_t		i;
	char		*valor;

	i = 0;
	valor = (char*)source;
	while (valor[i] != '\0' && i < n)
	{
		if (((int)valor[i]) == caracter)
			return (&valor[i]);
		i++;
	}
	if (((int)valor[i]) == caracter)
		return (&valor[i]);
	return (NULL);
}
