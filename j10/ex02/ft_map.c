/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 01:35:54 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/06 02:16:24 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f) (int))
{
	int i;
	int *r;

	r = (int *)malloc(sizeof(*r) * lenght);
	i = 0;
	while (i < lenght)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
