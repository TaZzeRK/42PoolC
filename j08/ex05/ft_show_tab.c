/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 06:22:09 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/26 22:52:48 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void				ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

void				ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(48 + n % 10);
}

void				ft_show_tab(struct s_stock_par *par)
{
	t_stock_par		*cpy;
	int				i;

	cpy = par;
	while (cpy->str)
	{
		ft_putstr(cpy->str);
		ft_putnbr(cpy->size_param);
		ft_putchar('\n');
		i = -1;
		while (cpy->tab[++i])
			ft_putstr(cpy->tab[i]);
		cpy++;
	}
}
