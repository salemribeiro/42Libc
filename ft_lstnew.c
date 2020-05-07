/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas </var/mail/sfreitas>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:54:16 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/07 19:59:02 by sfreitas         ###   ########.fr       */
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
