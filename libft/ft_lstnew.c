/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:49:00 by sfreitas          #+#    #+#             */
/*   Updated: 2020/04/07 19:50:00 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node			= (List*)malloc(sizeof(List));
	if (node)
	{
		node->content = content;
		node->next = NULL;
		return(node);
	}
	else
		return(0);
}
