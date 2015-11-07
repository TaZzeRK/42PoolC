/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:08:14 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/26 22:02:25 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_length(char **tab)
{
	int		length;
	int		i;
	int		j;

	j = 1;
	length = 0;
	i = 0;
	while (tab[j] != '\0')
	{
		while (tab[j][i] != '\0')
			i++;
		length = length + i + 1;
		j++;
		i = 0;
	}
	length = length + j;
	return (length);
}

char		*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*str;

	i = 1;
	j = 0;
	k = 0;
	length = ft_length(tab);
	str = (char *)malloc(sizeof(char) * length + 2);
	while (k < (length - 1) && tab[i])
	{
		while (tab[i][j] != '\0')
		{
			str[k++] = tab[i][j++];
		}
		str[k++] = *sep;
		i++;
		j = 0;
	}
	str[k - 1] = '\0';
	return (str);
}
