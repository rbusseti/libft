/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pop_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 20:35:27 by rbusseti          #+#    #+#             */
/*   Updated: 2013/12/26 22:52:43 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_pop_front(t_list **begin_list)
{
	t_list		*temp;

	temp = *begin_list;
	temp = temp->next;
	free(*begin_list);
	*begin_list = temp;
}
