/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 04:53:00 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/15 05:22:11 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nb2;

	nb2 = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power > 0)
		{
			nb2 = nb2 * nb;
			power--;
		}
		return (nb2);
	}
}
