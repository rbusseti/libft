/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 21:37:01 by rbusseti          #+#    #+#             */
/*   Updated: 2013/12/27 21:45:13 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		i;

	i = 1;
	if (argc > 1)
		list = ft_create_elem(argv[i]);
	i++;
	while (i < argc)
	{
		ft_list_push_back(&list, argv[i]);
		i++;
	}
	return (list);
}
