/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 22:10:14 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/14 04:01:33 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int alphar;

	alphar = 122;
	while (alphar <= 122 && alphar >= 97)
	{
		ft_putchar(alphar);
		alphar--;
	}
}
