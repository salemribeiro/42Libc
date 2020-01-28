/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:30:23 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/27 21:50:51 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void		*ft_memmove(void *dst, void *src, size_t len)
{
	size_t i;
	char *destination;
	char *source;
	i = 0;
	destination = (char)dst;
	source = (char)src;
	if(len > 0)
	{
		while(destination[i] != '\0' && i < len)
		{
			printf("%c", destination[i]);
			destination[i] = source[i];
			if(source[i] == '\0')
				return (destination);
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (destination);
}

int main(void)
{
	char src[] = "##";
	char org[] = "salem freitas ribeiro";
	char dst[] = "salem freitas ribeiro";
	
	memmove(org, org + 3, 21);
	ft_memmove(dst, dst + 3, 21);
	puts(org);
   	puts(dst);	
}

