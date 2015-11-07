/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 01:47:38 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/31 01:51:49 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int way;
	int tmp;

	way = 0;
	while (--lenght > 0)
	{
		tmp = f(tab[lenght - 1], tab[lenght]);
		if (tmp)
		{
			if (!way && tmp)
				way = tmp > 0 ? 1 : -1;
			if ((tmp > 0 && way == -1) || (tmp < 0 && way == 1))
				return (0);
		}
	}
	return (1);
}
