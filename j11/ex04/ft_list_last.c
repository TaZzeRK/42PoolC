/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:17:06 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/29 17:35:13 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		return (list);
	}
	return (list);
}
