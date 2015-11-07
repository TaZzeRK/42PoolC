/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:49:57 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/22 18:59:56 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_convert(int h)
{
	if (h == 0 || h == 24 || h == 12)
		return (12);
	return (h % 12);
}

void	ft_takes_place(int hour)
{
	printf("TH	E FOLLOWING TAKES PLACE BETWEEN %i.00 %c.M. AND %i.00 %c.M.\n",
			ft_convert(hour),
			hour < 12 || hour == 24 ? 'A' : 'P',
			ft_convert(hour + 1),
			hour < 11 || hour > 22 ? 'A' : 'P');
}
