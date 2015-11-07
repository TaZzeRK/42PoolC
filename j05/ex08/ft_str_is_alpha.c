/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 22:27:19 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/17 00:05:02 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}
