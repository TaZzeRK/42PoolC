/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 04:02:44 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 04:35:54 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_AUSTIN_POWERS "Fumer des ouinj"

# include <string.h>

typedef struct		s_perso
{
	char			*name;
	float			life;
	int				age;
	char			*profession;
}					t_perso;

#endif
