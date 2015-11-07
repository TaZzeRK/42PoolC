/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 21:46:32 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/17 19:51:52 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
