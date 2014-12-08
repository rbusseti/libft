/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 21:51:32 by rbusseti          #+#    #+#             */
/*   Updated: 2013/12/26 23:11:16 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_pop_back(t_list **begin_list)
{
	t_list		*temp;
	t_list		*prev_temp;

	temp = *begin_list;
	while (temp->next != NULL)
	{
		prev_temp = temp;
		temp = temp->next;
	}
	prev_temp->next = NULL;
	free(temp);
}
