/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 22:04:42 by rbusseti          #+#    #+#             */
/*   Updated: 2013/12/26 22:09:55 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_display(t_list *begin_list)
{
	while (begin_list->next != NULL)
	{
		ft_putendl(begin_list->content);
		begin_list = begin_list->next;
	}
	ft_putendl(begin_list->content);
}
