/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas </var/mail/sfreitas>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:54:16 by sfreitas          #+#    #+#             */
/*   Updated: 2020/04/08 18:54:18 by sfreitas         ###   ########.fr       */
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
