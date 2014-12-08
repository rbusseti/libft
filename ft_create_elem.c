/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/26 14:17:45 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/26 18:02:13 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_root	*ft_create_elem(void)
{
	t_root	*list;

	list = malloc(sizeof(*list));
	list->first = NULL;
	list->last = NULL;
	list->current = NULL;
	return (list);
}
