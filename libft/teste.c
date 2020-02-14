/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 19:06:00 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/14 19:22:21 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
 char **ptnmae;
  char *ptn;
  char *inicio;
  int i;
  i = 0;
  
  inicio = ptn;
  ptnmae = malloc(30);

  while(i < 20)
  {
    ptn = (char*)malloc(30);
    ptnmae = &ptn;
    ptnmae++;
	ptn = "salem junior";
    ptn += 30;
    i++;
  }
  while(i > 0)
  {
  	write(1, ptnmae, 10);
	ptnmae--;
  	i--;
  } 
  return 0;
}
