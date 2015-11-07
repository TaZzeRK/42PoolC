/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:05:08 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/22 21:31:13 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	r_maj(char r)
{
	r = r - 65;
	r = ((r + 42) % 26);
	r = r + 65;
	return (r);
}

char	r_min(char r)
{
	r = r - 97;
	r = ((r + 42) % 26);
	r = r + 97;
	return (r);
}

char	rotation(char r)
{
	if (r >= 65 && r <= 90)
		return (r_maj(r));
	else if (r >= 97 && r <= 122)
		return (r_min(r));
	else
		return (r);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotation(str[i]);
		i++;
	}
	return (str);
}
