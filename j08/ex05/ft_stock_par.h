/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 06:15:23 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/21 22:13:05 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct			s_stock_par
{
	int					size_param;
	char				*str;
	char				*copy;
	char				**tab;
}						t_stock_par;

void					ft_putchar(char c);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
