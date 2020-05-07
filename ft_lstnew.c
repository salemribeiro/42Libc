/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 20:06:09 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/07 20:06:10 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node			= (t_list*)malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = NULL;
		return(node);
	}
	else
		return(0);
}
