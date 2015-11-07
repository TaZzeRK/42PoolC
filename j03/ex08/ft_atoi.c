/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 22:19:55 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/14 23:08:37 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int count;
	int neg;
	int result;

	count = 0;
	neg = 0;
	result = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\n' ||
			str[count] == '\v' || str[count] == '\f' || str[count] == '\r')
		count++;
	if (str[count] == 45)
		neg = 1;
	if (str[count] == 45 || str[count] == 43)
		count++;
	while (str[count] >= 48 && str[count] <= 57)
	{
		result *= 10;
		result += ((int)str[count] - 48);
		count++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}
