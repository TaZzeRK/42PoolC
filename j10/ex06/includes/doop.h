/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 01:15:11 by mskaroup          #+#    #+#             */
/*   Updated: 2015/11/02 15:37:21 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include "opp.h"
# include "fct.h"

typedef struct		s_calc
{
	char			*operator;
	int				(*calc)(int, int);
}					t_calc;

t_calc				g_calc_syst[] =
{
	{"+", &addition},
	{"-", &substraction},
	{"/", &division},
	{"%", &modulo},
	{"*", &multiplication},
};

int					foreach_calc(t_calc *tab, char **argv, int (*cmpf)());
void				doop(char **argv);

#endif
