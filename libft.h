/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:35:21 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/08 14:54:42 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
** Regular functions Part1
*/

void			*ft_memset(void *, int, size_t);
void			ft_bzero(void*, size_t);
void			*ft_memcpy(void*, const void*, size_t);
void			*ft_memccpy(void*, const void*, int, size_t);
void			*ft_memmove(void*, const void*, size_t);
void			*ft_memchr(const void*, int, size_t);
int				ft_memcmp(const void*, const void*, size_t);
size_t			ft_strlen(const char*);

size_t			ft_strlcpy(char*, const char*, size_t);
size_t			ft_strlcat(char*, const char*, size_t);
char			*ft_strchr(const char*, int);
char			*ft_strrchr(const char*, int);
char			*ft_strnstr(const char*, const char*, size_t);
int				ft_strncmp(const char*, const char*, size_t);
int				ft_atoi(const char*);
int				ft_isalpha(int);
int				ft_isdigit(int);
int				ft_isalnum(int);
int				ft_isascii(int);
int				ft_isprint(int);
int				ft_toupper(int);
int				ft_tolower(int);
void			*ft_calloc(size_t, size_t);
char			*ft_strdup(const char*);

/*
** Regular functions Part 2
*/

char			*ft_substr(char const*, unsigned int, size_t);
char			*ft_strjoin(char const*, char const*);
char			*ft_strtrim(char const*, char const*);
char			**ft_split(char const*, char);
char			*ft_itoa(int);
char			*ft_strmapi(char const*, char (*f)(unsigned int, char));
void			ft_putchar_fd(char, int);
void			ft_putstr_fd(char*, int);
void			ft_putendl_fd(char*, int);
void			ft_putnbr_fd(int, int);

#endif
