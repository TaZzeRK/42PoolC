/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 00:38:55 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/02 16:17:35 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_sort_wordtab(char **tab)
{
	int val;
	int i;

	val = 0;
	while (!val)
	{
		val = 1;
		i = 0;
		while (tab[++i])
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				ft_swap(tab + i - 1, tab + i);
				val = 0;
			}
	}
}
