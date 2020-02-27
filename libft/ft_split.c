/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:56:34 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 20:33:05 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		newpointer(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
		i++;
	i++;
	return (i);
}

static int		wordcount(char *s, char c)
{
	int i;

	if (*s)
	{
		i = 1;
		while (*s)
		{
			if (*s == c)
				i++;
			s++;
		}
		return (i);
	}
	else
		return (0);
}

static int		addpointer(char *s, char **origin, char c, int index)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	origin[index] = (char*)malloc((sizeof(char) * i) + 1);
	if (!origin[index])
		return (0);
	while (j < i)
	{
		origin[index][j] = (char)s[j];
		j++;
	}
	origin[index][j] = '\0';
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**origin;
	char	*ptr;
	char	*newp;
	int		i;
	int		numbersplit;
	int 	j;

	//j = 0;
	ptr = (char*)s;
	newp = (char*)malloc(sizeof(char) * newpointer(ptr));
	i = j = 0;
	newp = ft_strtrim(ptr, &c);
	numbersplit = wordcount(newp, c);
	if (numbersplit)
	{
		origin = (char**)calloc(1, sizeof(char*) * numbersplit);
		if (!origin)
			return (0);
		while (i < numbersplit )
		{
			j += addpointer(&newp[j], origin, c, i) + 1;
			i++;
		}
	}
	else
		return (0);
	return (origin);
}
