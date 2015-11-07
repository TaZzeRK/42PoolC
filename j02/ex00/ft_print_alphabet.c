/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 21:31:56 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/14 04:01:57 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 97;
	while (alpha >= 97 && alpha <= 122)
	{
		ft_putchar(alpha);
		alpha++;
	}
}
