/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:21:55 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/25 13:44:21 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
		ft_putnbr_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr]);
}
