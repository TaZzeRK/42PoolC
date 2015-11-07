/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 12:11:49 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 12:16:00 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int omgtab[length];
	int omfg[3];

	omfg[0] = -1;
	while (++omfg[0] < length)
		omgtab[omfg[0]] = 0;
	omfg[0] = -1;
	while (++omfg[0] < length)
		if (!omgtab[omfg[0]])
		{
			omfg[1] = omfg[0];
			omfg[2] = 0;
			while (++omfg[1] < length)
				if (!omgtab[omfg[1]] && tab[omfg[0]] == tab[omfg[1]])
				{
					omgtab[omfg[0]] = 1;
					omgtab[omfg[1]] = 1;
					++omfg[2];
					break ;
				}
			if (!omfg[2])
				return (tab[omfg[0]]);
		}
	return (tab[length]);
}
