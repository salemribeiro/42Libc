/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:17:11 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/04 19:11:37 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		sizecompare(char *text, char *word)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (text[i])
		i++;
	while (word[j])
		j++;
	return (i - j);
}

char			*ft_strnstr(const char *text, const char *word, int value)
{
	int		i;
	int		j;
	int		valid;
	char	*ptn;

	i = 0;
	j = 0;
	ptn = (char*)text;
	if (sizecompare((char*)text, (char*)word) >= 0)
	{
		if (word[i] == '\0')
			return (&ptn[i]);
		while (ptn[i] != '\0' && i < value)
		{
			while (ptn[i + j] == word[j] && word[j] != '\0')
			{
				valid = (word[j] == '\0' || (i + j) < value) ? 1 : 0;
				j++;
			}
			if (valid == 1)
				return (&ptn[i]);
			i++;
		}
	}
	return (NULL);
}
