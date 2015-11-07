/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 23:05:16 by mskaroup          #+#    #+#             */
/*   Updated: 2015/10/24 22:47:14 by mskaroup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int		main(void)
{
	printf("%d\n", nmatch("bonjour", "**j**"));
	return (0);
}
