/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 00:06:12 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 00:09:59 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = -1;
	while (factory[++i])
	{
		j = -1;
		while (factory[++j])
			free(factory[i][j]);
		free(factory[i]);
	}
	free(factory);
}
