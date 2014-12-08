/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 14:17:07 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/26 18:01:37 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_root **root, void *content)
{
	t_list	*list;
	t_list	*templist;

	list = malloc(sizeof(*list));
	list->next = NULL;
	if ((*root)->first == NULL && (*root)->last == NULL)
		(*root)->first = list;
	else
	{
		templist = (*root)->last;
		templist->next = list;
		list->prev = templist;
	}
	list->content = content;
	(*root)->last = list;
}
