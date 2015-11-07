/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 06:11:22 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 17:38:22 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	de;

	i = 0;
	while (dest[i] && i < size)
		i++;
	de = i;
	while (src[i - de] && i < size - 1)
	{
		dest[i] = src[i - de];
		i++;
	}
	if (de < size)
		dest[i] = '\0';
	return (de + ft_strlen(src));
}
