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

void        *ft_memmove(void *dst, void *src, size_t len)
3	{
4	    size_t i;
5	    char *destination;
6	    char *source;
7	    i = 0;
8	    destination = (char*)dst;
9	    source = (char*)src;
10	    if(len > 0)
11	    {
12	        while(destination[i] != '\0' && i < len)
13	        {
14	            printf("%c", destination[i]);
15	            destination[i] = source[i];
16	            if(source[i] == '\0')
17	                return (destination);
18	            i++;
19	        }
20	    }
21	    else
22	    {
23	        return (NULL);
24	    }
25	    return (destination);
26	}


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

