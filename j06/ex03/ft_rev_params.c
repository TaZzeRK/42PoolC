/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 23:18:33 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/21 19:22:55 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int z;

	i = argc - 1;
	z = 0;
	while (i > 0)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i--;
	}
	return (0);
}
