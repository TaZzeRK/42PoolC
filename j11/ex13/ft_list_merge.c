/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 20:05:36 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/02 16:23:16 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	tmp = *begin_list1;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin_list2;
}
