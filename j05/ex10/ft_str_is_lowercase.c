/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 23:26:07 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/16 23:59:31 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
