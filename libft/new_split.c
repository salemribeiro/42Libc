/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:56:34 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/27 20:33:05 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*   BIBLIOTECAS DEVEM SER RETIRADAS APÓS A FASE DE TESTES                    */
#include <unistd.h>
#include <stdio.h>

/*   CHAMADAS DE FUNÇÃO DEVEM SER RETIRADAS APÓS A FASE DE TESTES             */
size_t	ft_strlen(const char *source);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *s2);

/*   Chamadas de funções permanentes nesse documento                          */
char	*cleartext(char *source, char c, size_t len);
char	**createcontroller(char *source, char c);
char	*separatepointer(char *s, char c);

/*----------------------------------------------------------------------------*/
/*   Função principal responsável por quebrar uma grande string em várias     */
/*   várias strings menores e retornando um ponteiro de ponteiro apontando    */
/*   cada uma delas.     FUNÇÃO PRINCIPAL                                     */
/*----------------------------------------------------------------------------*/
char	**ft_split(char const *s, char c)
{
	char			*source;
	char			**controler;
	unsigned int	i;
	unsigned int	j;

	source = cleartext((char*)s, c, ft_strlen(s));
	controler = (char**)createcontroller(source, c);
	i = j = 0;
	if (source[i] == '\0')
		return (0);
	printf("%s\n", source[i]);
	controler[j] = separatepointer(&source[i], c);
	j++;
	while (source[i] != '\0')
	{
		if (source[i] == c && source[i] != '\0')
		{
			controler[j] = separatepointer(&source[i + 1], c);
			j++;
		}
		i++;
	}
	controler[j] = '\0';
	return (controler);
}

int		main()
{
char **newpointer;
int		i;

	i = 0;
	newpointer = (char**)ft_split("Salem Freitas Ribeiro Junior", ' ');
	while (newpointer[i])
	{
		printf("%s\n",newpointer[i]);
		i++;
	}
	return (0);
}











/*----------------------------------------------------------------------------*/
/*   Função responsável por receber e tratar a string constante, retirando    */
/*   caracteres vazios e excesso de caracteres separadores                    */
/*----------------------------------------------------------------------------*/
char	*cleartext(char *source, char c, size_t len)
{
	char	*ptr;
	char	*newptr;
	char	filter[2];
	int		i;
	int		j;

	filter[0] = c;
	filter[1] = '\0';
	ptr = ft_strtrim(source, filter);
	newptr = (char*)calloc(len, sizeof(char));
	i = 0;
	j = 0;
	while (ptr[i])
	{
		if ((ptr[i] != c) || (ptr[i] == c && ptr[i + 1] != c))
		{
			newptr[j] = ptr[i];
			j++;
		}
		i++;
	}
	return (newptr);
}

/*----------------------------------------------------------------------------*/
/*    Função responsável por alocar a memória do ponteiro de ponteiro.        */
/*    Faz isso contando o número de caracteres separadores e somando mais um  */
/*    o caracter excedente é o indicador de fim do ponteiro                   */
/*----------------------------------------------------------------------------*/
char	**createcontroller(char *source, char c)
{
	int nseparadores;
	int i;

	nseparadores = 1;
	i = 0;
	while (source[i])
	{
		if (source[i] == c)
			nseparadores++;
		i++;
	}
	return((char**)calloc(nseparadores, sizeof(char)));
}

/*----------------------------------------------------------------------------*/
/*         Função responsável por preecher os ponteiros secundários           */
/*----------------------------------------------------------------------------*/
char	*separatepointer(char *s, char c)
{
	int i;
	char *newptr;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	newptr = (char*)calloc(i + 1, sizeof(char));
	i--;
	while (i >= 0)
	{
		newptr[i] = s[i];
		i--;
	}
	return (newptr);
}
