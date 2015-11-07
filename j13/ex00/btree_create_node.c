/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 23:48:33 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/06 00:19:05 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree			*btree_create_node(void *item)
{
	t_btree		*new_elem;

	new_elem = 0;
	new_elem = (t_btree*)malloc(sizeof(t_btree));
	if (new_elem)
	{
		new_elem->item = item;
		new_elem->left = 0;
		new_elem->right = 0;
	}
	return (new_elem);
}
