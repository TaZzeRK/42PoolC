/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 23:20:33 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/16 23:25:30 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}
