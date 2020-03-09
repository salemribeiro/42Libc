/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:56:34 by sfreitas          #+#    #+#             */
/*   Updated: 2020/03/09 18:46:11 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Função responsável por receber e tratar a string constante, retirando
** caracteres vazios e excesso de caracteres separadores
*/

static char		*cleartext(char *source, char c, size_t len)
{
	char	*ptr;
	char	*newptr;
	char	filter[2];
	int		i;
	int		j;

	filter[0] = c;
	filter[1] = '\0';
	ptr = ft_strtrim(source, filter);
	newptr = (char*)ft_calloc(len + 1, sizeof(*newptr));
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

/*
** Função responsável por alocar a memória do ponteiro de ponteiro.
** Faz isso contando o número de caracteres separadores e somando mais um
** o caracter excedente é o indicador de fim do ponteiro
*/

static char		**createcontroller(char *source, char c)
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
	return ((char**)ft_calloc(nseparadores + 1, sizeof(char*)));
}

/*
** Função responsável por preecher os ponteiros secundários
**
** static char		*separatepointer(char *s, char c)
** {
** int		i;
** int		j;
** char	*newptr;
**
** i = 0;
** j = 0;
** while (s[i] && s[i] != c)
** i++;
** newptr = (char*)malloc(sizeof(char) * (i + 1));
** while (j < i)
** {
** newptr[j] = s[j];
** j++;
** }
** newptr[j] = '\0';
** return (newptr);
** }
*/

/*
 ** Função responsável por verificar a quantidade de espaços separadores
*/
	static char		*protetor(char *s, char c)
{
	int i;
	char newptr;

	i = 0;
	while (s[i])
		i++;
	if (i > 1)
	{
		if (s[0] == c && s[1] == c)
		{
			newptr = (char*)malloc(sizeof(char));
			newptr[0] = '\0';
		}
		else
			return(s);
	}
	return(s);
}


/*
** Função principal responsável por quebrar uma grande string em várias
** várias strings menores e retornando um ponteiro de ponteiro apontando
** cada uma delas.     FUNÇÃO PRINCIPAL
*/

char			**ft_split(char const *s, char c)
{
	//char			*source;
	char			**controler;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	//source = cleartext((char*)s, c, ft_strlen(s));
	source = protetor(s, c);
	controler = (char**)createcontroller(source, c);
	if (*source == '\0')
		return (controler);
	controler[j] = separatepointer(&source[i], c);
	j++;
	while (source[i] != '\0')
	{
		if (source[i] == c)
		{
			controler[j] = separatepointer(&source[i + 1], c);
			j++;
		}
		i++;
	}
	return (controler);
}
