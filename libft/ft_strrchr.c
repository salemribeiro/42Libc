/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:46:27 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/15 17:35:51 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *source, int caracter)
{
	int		i;
	char	*ptn;

	i = 0;
	ptn = (char*)source;
	while (ptn[i] != '\0')
	{
		if (ptn[i] == caracter)
			return (&ptn[i]);
		i++;
	}
	return (NULL);
}
