/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 14:41:19 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/26 18:01:53 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_root **root, void *content)
{
	t_list	*list;
	t_list	*templist;
	t_root	*temp;

	temp = *root;
	list = malloc(sizeof(*list));
	list->next = NULL;
	list->prev = NULL;
	list->content = content;
	if (temp->first == NULL && temp->last == NULL)
		temp->last = list;
	else
	{
		templist = temp->first;
		list->next = templist;
		templist->prev = list;
	}
	temp->first = list;
}
