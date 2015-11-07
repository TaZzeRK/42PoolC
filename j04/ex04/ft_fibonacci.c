/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/15 13:50:23 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/15 22:36:33 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int fib;

	if (index > 1)
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	else if (index == 0 || index == 1)
		fib = index;
	else
		fib = -1;
	return (fib);
}
