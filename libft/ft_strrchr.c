/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:46:27 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/10 15:48:02 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*strrchr(const char *source, int caracter)
{
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		return (source[i]);
		i++;
	}
	return (NULL);
}
