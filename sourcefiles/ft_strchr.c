/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:48 by tomas             #+#    #+#             */
/*   Updated: 2024/04/06 17:30:37 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	const char *d;

	d = '\0';
	if (c == '\0')
		return ((char *)d);
	while (*s)
	{
		d = s;
		if (c == *s)
			return ((char *)d);
		s++;
	}
	return (NULL);
}
