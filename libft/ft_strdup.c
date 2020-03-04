/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 20:32:06 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/04 16:53:41 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	ptr = (char*)malloc((sizeof(char) * i) + 1);
	if (!ptr)
		return (NULL);
	if (i > 0)
	{
		while (j <= i)
		{
			ptr[j] = s1[j];
			j++;
		}
	}
	return (ptr);
}
