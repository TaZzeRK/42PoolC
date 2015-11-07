/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 05:34:00 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/21 19:30:50 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i != '\0')
	{
		i = 0;
		j = 1;
		while (++j < argc)
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				i = 1;
				ft_swap(argv + j - 1, argv + j);
			}
	}
	j = 0;
	while (++j < argc)
		ft_putstr(argv[j]);
}
