/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:35:21 by sfreitas          #+#    #+#             */
/*   Updated: 2020/02/10 17:59:16 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void *ft_memset(void *source, int caracter, size_t len);
void ft_putstr(char value);
void ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_bzero(void *source, size_t len);
void *ft_memcpy(void *dest, const void *source, size_t len);

#endif
