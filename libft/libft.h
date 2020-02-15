/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:35:21 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/15 17:58:13 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void			ft_bzero(void *source, size_t len);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int caracter);
int				ft_isalpha(int caracter);
int				ft_isascii(int caracter);
int				ft_isdigit(int caracter);
int				ft_isprint(int caracter);
void			*ft_memccpy(void *dest, const void *source, size_t len);
void			*ft_memchr(const void *source, int caracter, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *dest, const void *source, size_t len);
void			*ft_memmove(void *dst, void *src, size_t len);
void			*ft_memset(void *source, int caracter, size_t len);
char			*ft_strchr(const char *source, int caracter);
char			*ft_strdup(const char *s1);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *source);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *word, const char *text);
char			*ft_strrchr(const char *source, int caracter);
int				ft_tolower(int caracter);
int				ft_toupper(int caracter);

#endif
