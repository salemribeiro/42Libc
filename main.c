/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:51:58 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/23 21:27:07 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char		*test_strcpy(char *value)
{
	
	
}

bool		


void		gohorse()
{

}

int main ()
{
	char str1[50];
	char str2[50];
	char str3[50];
	char str4[50];

	puts("TESTE PARA STRCPY E BZERO");

	strcpy(str1,"VALOR escolhido para a strcpy");
	strcpy(str2,"VALOR escolhido para a ft_strcpy");
	strcpy(str3,"VALOR escolhido para a bzero");
	strcpy(str4,"VALOR escolhido para a ft_bzero");




	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	memset(str1,'$',7);
	ft_memset(str2, '$', 7);
	bzero(str3 + 5, 7);
	ft_bzero(str4 + 5, 7);


	puts(str1);
	puts(str2);
   	puts(str3);
	puts(str4);

	puts("TESTE PARA MEMCPY");
	char a[] = "Nosso primeiro valor";
	char b[] = "Nosso primeiro valor";
	char c[] = "valor 2";
	memcpy(a, c, 7);
	ft_memcpy(b, c, 7);
	puts (a);	
	puts (b);


	

	return(0);
}
