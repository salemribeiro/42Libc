/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:57:20 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/15 18:15:33 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int size;
	
	size = ft_strlen(s);
	write(fd, s, size);
}
/*
int main()
{
	ft_putstr_fd("salem ribeiro", 1);
	return (0);
}*/
