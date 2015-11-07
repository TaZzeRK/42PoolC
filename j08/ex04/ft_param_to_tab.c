/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 01:41:31 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/21 21:25:36 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char					*ft_strdup(char *str)
{
	char				*ptr;
	char				*ans;

	ptr = str;
	while (*ptr)
		++ptr;
	if (!(ans = (char *)malloc(ptr - str)))
		return (0);
	ptr = str - 1;
	while (*(++ptr))
		ans[ptr - str] = *ptr;
	return (ans);
}

int						ft_strlen(char *str)
{
	char				*cpy;

	cpy = str;
	while (*cpy)
		++cpy;
	return (cpy - str);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*ans;
	int					i;

	ans = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		ans[i].str = av[i];
		ans[i].copy = ft_strdup(av[i]);
		ans[i].size_param = ft_strlen(av[i]);
		ans[i].tab = ft_split_whitespaces(av[i]);
	}
	ans[ac].str = 0;
	return (ans);
}
