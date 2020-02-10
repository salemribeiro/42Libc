/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:07:55 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/10 15:28:06 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *source, int caracter, size_t n)
{
	int		i;
	char	*valor;

	i = 0;
	valor = (char*)source;
	while (valor[i] != '\0')
	{
		if (((int)valor[i]) == caracter)
			return (valor + i);
		i++;
	}
	return (NULL);
}
