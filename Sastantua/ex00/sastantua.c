/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 17:29:39 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/18 23:17:15 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

static int	aff_door(int level, int *stage, int base, int tmp)
{
	int size_door;

	size_door = (stage[0] % 2) ? stage[0] : (stage[0] - 1);
	if ((stage[0] == stage[1]) && (level < size_door)
			&& (tmp >= ((base + 1) / 2) - (size_door / 2))
			&& (tmp <= ((base + 1) / 2) + (size_door / 2)))
	{
		if ((stage[0] >= 5) && (level == ((size_door / 2)))
				&& (tmp == ((base / 2) - (size_door / 2) + 2)))
			ft_putchar('$');
		else
			ft_putchar('|');
		return (1);
	}
	else
		return (0);
}

static void	aff_base(int sizeline, int line, int many, int *stage)
{
	int temp;
	int base;
	int lvl;

	stage[1]++;
	base = sizeline - (many * 2) + 2;
	while (many--)
	{
		temp = line - base / 2;
		lvl = temp;
		while (temp-- > 0)
			ft_putchar(' ');
		temp = base;
		ft_putchar('/');
		while (temp-- > 2)
		{
			if (!aff_door(lvl, stage, base, temp))
				ft_putchar('*');
		}
		ft_putchar('\\');
		ft_putchar('\n');
		base += 2;
	}
}

static void	aff_stage(int cursize, int line, int curline, int *stage)
{
	if (cursize < 3)
		return ;
	aff_stage(cursize - 1, line, curline - cursize - (cursize) / 2, stage);
	aff_base(curline * 2 + 1, line, cursize, stage);
}

void		sastantua(int size)
{
	int halfline;
	int temp;
	int cur;
	int stage[2];

	if (size < 1)
		return ;
	stage[0] = size;
	stage[1] = 0;
	temp = size + 2;
	halfline = (temp + 1) / -2;
	while (temp >= 3)
	{
		cur = temp;
		halfline += cur + (cur + 1) / 2;
		while (cur > 0)
			--cur;
		--temp;
	}
	aff_stage(size + 2, halfline, halfline, stage);
}

int			ft_atoi(char *str)
{
	int result;
	int index;
	int signe;

	result = 0;
	index = 0;
	signe = 1;
	while (str[index] != '\0')
	{
		if (str[index] == '-')
			signe = signe * -1;
		else if ((str[index] < '0' || str[index] > '9'))
			return (0);
		else
			result = result * 10 + (str[index] - '0');
		index = index + 1;
	}
	return (result * signe);
}
