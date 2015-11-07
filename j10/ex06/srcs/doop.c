/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 01:44:01 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/01 01:46:01 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

int		foreach_calc(t_calc *tab, char **argv, int (*cmpf)())
{
	int i;

	i = 0;
	while (i < 5)
	{
		if ((*cmpf)(tab[i].operator, argv[2]) == 0)
			return (tab[i].calc(ft_atoi(argv[1]), ft_atoi(argv[3])));
		i++;
	}
	return (0);
}

void	doop(char **argv)
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero\n");
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(foreach_calc(g_calc_syst, argv, &ft_strcmp));
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		doop(argv);
	}
	return (0);
}
