/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:56:34 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/03 20:56:50 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	searchlength(const char *str, int *body)
{
	int i;

	body[0] = 1;
	body[1] = -2;
	body[2] = -2;
	i = 0;
	while ((!ft_isprint(str[i]) && str[i] != '\e') || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		body[0] = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		body[1] = i;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		body[2] = i;
		i++;
	}
}

int		ft_atoi(const char *str)
{
	int body[3];
	int result;

	if (!str[0])
		return (0);
	searchlength(str, body);
	result = 0;
	if (body[0] != -2 && body[1] != -2 && body[2] != -2)
	{
		while (body[1] <= body[2])
		{
			result += ((str[body[2]] - 48) * body[0]);
			body[0] *= 10;
			body[2]--;
		}
	}
	return (result);
}
