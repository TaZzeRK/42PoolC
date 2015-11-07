/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:52:05 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/18 23:57:22 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tempo[ft_strlen(str)];

	i = 0;
	while (str[i])
	{
		tempo[i] = str[i];
		i++;
	}
	j = 0;
	i--;
	while (str[i])
	{
		str[j++] = tempo[i--];
	}
	return (str);
}
