/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_char_display.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 15:09:54 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/26 18:03:36 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_char_display(t_root *root)
{
	t_list	*list;

	list = root->first;
	while (list->next != NULL)
	{
		write(1, list->content, 1);
		list = list->next;
	}
	write(1, list->content, 1);
}
