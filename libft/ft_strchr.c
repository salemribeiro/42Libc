/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:27:47 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/10 15:46:26 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *source, int caracter)
{
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		if (source[i] == caracter)
			return (source[i]);
	}
	return (NULL);
}
