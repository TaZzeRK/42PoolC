/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 03:31:10 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/07 03:42:25 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		can_do(int queens[8], int nb_queens, int i)
{
	int j;

	j = -1;
	while (++j < nb_queens)
	{
		if (queens[j] != 0)
		{
			if (queens[j] == i)
				return (0);
			if (queens[j] == i - (nb_queens - j))
				return (0);
			if (queens[j] == i + (nb_queens - j))
				return (0);
		}
	}
	return (1);
}

int		solve(int queens[92][8], int nb_queens, int cfg)
{
	int i;

	i = -1;
	if (nb_queens >= 8)
	{
		while (++i < 8)
			ft_putchar(queens[cfg][i] + 48);
		ft_putchar('\n');
		return (cfg++);
	}
	else
	{
		i = 0;
		while (++i <= 8)
		{
			if (can_do(queens[cfg], nb_queens, i))
			{
				queens[cfg][nb_queens] = i;
				cfg = solve(queens, nb_queens + 1, cfg);
			}
		}
	}
	return (cfg);
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens[92][8];
	int i;
	int j;

	i = -1;
	while (++i < 92)
	{
		j = -1;
		while (++j < 8)
			queens[i][j] = 0;
	}
	solve(queens, 0, 0);
}
