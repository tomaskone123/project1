/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:09:36 by tomas             #+#    #+#             */
/*   Updated: 2024/04/08 13:46:10 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	const char	*pS;
	int		i;

	i = 0;
	pS = s;
	if (c == 0)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	while (i >= 0)
	{
		if ((*pS == c) && (i > 0))
			--i;
		if (i == 0)
			return ((char *)pS);
		pS++;
	}
	return (NULL);
}
