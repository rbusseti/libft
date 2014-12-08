/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_str_display.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 17:20:50 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/26 17:24:23 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_str_display(t_root *root)
{
	t_list	*list;

	list = root->first;
	while (list->next != NULL)
	{
		ft_putendl(list->content);
		list = list->next;
	}
	ft_putendl(list->content);
}
