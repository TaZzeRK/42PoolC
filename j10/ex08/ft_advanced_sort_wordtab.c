/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 00:49:16 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/01 00:55:43 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int val;
	int i;

	val = 0;
	while (!val)
	{
		val = 1;
		i = 0;
		while (tab[++i])
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				ft_swap(tab + i - 1, tab + i);
				val = 0;
			}
	}
}
