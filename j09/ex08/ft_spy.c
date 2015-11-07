/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 03:17:02 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 03:19:38 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((s2[i] == ' ') || (s2[i] == '\n') || (s2[i] == '\v')
			|| (s2[i] == '\t') || (s2[i] == '\f') || (s2[i] == '\r'))
		i++;
	while ((s1[j] != '\0') && (s2[i] != '\0') && (s1[j] == s2[i]))
	{
		i++;
		j++;
	}
	return (s1[j] - s2[i]);
}

int		ft_optimize_research(char *str)
{
	ft_strlowcase(str);
	if (ft_strcmp("president", str) == 0)
		return (1);
	if (ft_strcmp("attack", str) == 0)
		return (1);
	if (ft_strcmp("powers", str) == 0)
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
	{
		if (ft_optimize_research(argv[i]) == 1)
			write(1, "Alert!!!\n", 9);
	}
	return (0);
}
