/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:31:14 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 14:40:05 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	i;

	i = ft_strlen(set);
	temp = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char)); //predelat strlen na ft_strlen
	if (temp == NULL)
		return (NULL);
	while (*s1)
	{
		if ((*s1 == *set) && (i > 0))
		{
			s1++;
			set++;
			i--;
		}
		else if (*s1 != *set)
		{
			*temp = *s1;
		}
		s1++;

	}
	return (temp);
}

