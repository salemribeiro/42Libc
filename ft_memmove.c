/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:30:23 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/23 21:44:53 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void		*ft_memmove(void *dst, void *src, size_t len)
{
	
	return (dst);	
}

int main(void)
{
	char src[] = "##";
	char dst[] = "salem freitas ribeiro";
	memmove(dst, dst + 3, 4);
	puts(dst);
   	puts(src);	
}

