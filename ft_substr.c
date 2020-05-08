/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:00:03 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/08 12:57:11 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*valuesb;

	i = 0;
	j = 0;
	valuesb = (char*)malloc((sizeof(char) * len) + 1);
	if (!valuesb || !s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (valuesb);
	while (s[i] != '\0')
		i++;
	if (i >= (start + len))
	{
		i = start;
		while (s[i] != '\0' && i < (start + len))
			valuesb[j++] = s[i++];
	}
	valuesb[j] = '\0';
	return (valuesb);
}
