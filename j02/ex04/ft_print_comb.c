/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 23:06:44 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/14 15:32:29 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_number(int nbr1, int nbr2, int nbr3)
{
	ft_putchar(nbr1);
	ft_putchar(nbr2);
	ft_putchar(nbr3);
	return (0);
}

void	ft_print_comb(void)
{
	int nbr1;
	int nbr2;
	int nbr3;

	nbr1 = '0';
	while (nbr1 <= '9')
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= '9' && nbr2 > nbr1)
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= '9' && nbr3 > nbr2)
			{
				ft_print_number(nbr1, nbr2, nbr3);
				if (!(nbr1 == '7' && nbr2 == '8' && nbr3 == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}
