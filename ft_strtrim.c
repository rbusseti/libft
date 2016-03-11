/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:22:09 by rbusseti          #+#    #+#             */
/*   Updated: 2016/03/10 14:57:12 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			j;
	size_t			k;
	size_t			len;
	char			*strnew;

	i = 0;
	len = ft_strlen(s);
	j = len - 1;
	k = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	while ((s[j] == ' ') || (s[j] == '\t') || (s[j] == '\n'))
		j--;
	if ((i == 0) && (j == len - 1))
		return ((char *)s);
	k = j - i + 1;
	if (k <= 0)
		k = 0;
	strnew = ft_strsub(s, i, k);
	return (strnew);
}
