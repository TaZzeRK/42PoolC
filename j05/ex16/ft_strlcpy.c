/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 15:42:14 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/23 18:01:02 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*s1;
	char			*s2;
	unsigned int	len;

	s1 = dest;
	s2 = src;
	len = size;
	if (len != 0)
	{
		while (--len != 0)
		{
			if ((*s1++ = *s2++) == '\0')
				break ;
		}
	}
	if (len == 0)
	{
		if (size != 0)
			*s1 = '\0';
		while (*s2++)
			;
	}
	return (s2 - src - 1);
}
