/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:17:11 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/15 19:12:34 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *word, const char *text)
{
	int		i;
	int		j;
	int		valid;
	char	*ptn;

	i = 0;
	j = 0;
	valid = 0;
	ptn = (char*)text;
	while (ptn[i] != '\0')
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

//int main()
//{
//	char *ptn;
//	ptn = ft_strnstr("salem", "eu sou amigo do salem");
//
//	return (0);
//}


