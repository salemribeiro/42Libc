/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 20:04:18 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/07 20:04:21 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *tempnext;

	temp = *lst;
	while (temp)
	{
		tempnext = temp->next;
		del(temp->content);
		free(temp);
		temp = temp->next;
	}
	*lst = 0;
}
