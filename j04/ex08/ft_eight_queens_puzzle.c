/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 03:06:37 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/07 03:29:43 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_cfg;

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
		g_cfg++;
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

int		ft_eight_queens_puzzle(void)
{
	int queens[92][8];
	int i;
	int j;

	g_cfg = 0;
	i = -1;
	while (++i < 92)
	{
		j = -1;
		while (++j < 8)
			queens[i][j] = 0;
	}
	solve(queens, 0, 0);
	return (g_cfg);
}
