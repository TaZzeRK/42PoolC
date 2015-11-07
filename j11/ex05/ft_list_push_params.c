/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:36:40 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/30 01:48:43 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void				ft_list_push_front(t_list **begin_list, void *data)
{
	t_list			*ptr;

	ptr = *begin_list;
	*begin_list = ft_create_elem(data);
	(*begin_list)->next = ptr;
}

t_list				*ft_list_push_params(int ac, char **av)
{
	t_list			*list;
	int				i;

	i = -1;
	list = 0;
	while (++i < ac)
		ft_list_push_front(&list, av[i]);
	return (list);
}
