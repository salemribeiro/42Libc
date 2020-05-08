/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:57:20 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/07 22:38:47 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		size;
	char	*ptr;

	if (!s)
		return ;
	ptr = ft_strjoin(s, "\n");
	size = ft_strlen(ptr);
	write(fd, ptr, size);
}
