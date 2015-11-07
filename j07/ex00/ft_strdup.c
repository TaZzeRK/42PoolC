/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 18:00:52 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/25 19:09:44 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*nstr;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	nstr = (char *)malloc(sizeof(*nstr) * (src_size));
	if (nstr == NULL)
		return (NULL);
	while (i < src_size)
	{
		nstr[i] = src[i];
		i++;
	}
	nstr[src_size] = '\0';
	return (nstr);
}
