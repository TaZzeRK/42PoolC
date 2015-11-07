/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 13:09:48 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/07 17:15:11 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb == 3)
		return (1);
	else
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
				return (0);
			i++;
		}
	}
	return (1);
}
