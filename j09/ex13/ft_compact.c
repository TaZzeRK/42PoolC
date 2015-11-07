/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:11:44 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 10:27:48 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_compact_2(char **tab, int *length, int *i, int *k)
{
	while (tab[(*i) + (*k)][0] == '\0')
	{
		(*k)++;
		if ((*i) + (*k) == (*length))
		{
			(*k) = 1;
			(*i)++;
		}
	}
}

int		ft_compact(char **tab, int length)
{
	int i;
	int k;
	int ret;

	i = 1;
	k = 1;
	ret = length;
	while (tab && i < length && i + k <= length)
	{
		if (tab[i][0] == '\0')
		{
			if (tab[i + k][0] != '\0')
			{
				tab[i] = tab[i + k];
				tab[i + k] = "\0";
				ret--;
				i = 1;
			}
			else
				ft_compact_2(tab, &length, &i, &k);
		}
		i++;
	}
	return (ret);
}
