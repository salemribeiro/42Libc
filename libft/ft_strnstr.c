/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:17:11 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/18 12:14:05 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *text, const char *word, int value)
{
	int		i;
	int		j;
	int		valid;
	char	*ptn;

	i = 0;
	j = 0;
	valid = 0;
	ptn = (char*)text;
	if (word[i] == '\0')
		return (&ptn[i]);
	while (ptn[i] != '\0' && i < value)
	{
		while (ptn[i + j] == word[j] && word[j] != '\0')
		{
			j++;
			if (word[j] == '\0')
				valid = 1;
		}
		if (valid == 1)
			return (&ptn[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
