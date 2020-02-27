/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:56:34 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/17 18:03:15 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		newpointer(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
		i++;
	i++;
	return (i);
}

static void		stringclean(char *s, char *newp, char c)
{
	int i;
	int first;

	i = 0;
	first = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			*newp = s[i];
			first = 1;
			newp++;
		}
		else if (s[i] == c && s[i+1] != c && first && s[i+1] != '\0')
		{
			*newp = s[i];
			newp++;
		}
		i++;
	}
	*newp = '\0';
}

static int		wordcount(char *s, char c)
{
	int i;

	if(*s)
	{
		i = 1;
		while (*s)
		{
			if (*s == c)
				i++;
			s++;
		}
		return(i);
	}
	else
		return(0);
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

	ptr = (char*)s;
	newp = (char*)malloc(sizeof(char) * newpointer(ptr));
	i = 0;
	stringclean(ptr, newp, c);
	numbersplit = wordcount(newp, c);
	if (numbersplit)
	{
		origin = (char**)malloc(sizeof(char*) * numbersplit);
		if (!origin)
			return (0);
		while (i < numbersplit)
		{
			newp += addpointer(newp, origin, c, i) + 1;
			i++;
		}
	}
	return (origin);
}
/*
int main()
{
	char **ptr;
    ptr = (char**)ft_split("    salem freitas ribeiro   junior", ' ');
	return(0);
}*/
