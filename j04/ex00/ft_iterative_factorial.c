/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 03:10:20 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/15 04:30:46 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb >= 0 && nb < 13)
	{
		result = 1;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	else
		result = 0;
	return (result);
}
