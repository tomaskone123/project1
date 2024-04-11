/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:31:14 by tomas             #+#    #+#             */
/*   Updated: 2024/04/11 14:36:23 by tomas            ###   ########.fr       */
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
	size_t	total;

	i = 0;
	total = ft_strlen(s1) - 1;
	temp = (char *)malloc(total * sizeof(char)); //predelat strlen na ft_strlen
	if (temp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] == *set)
			i++;
		temp[i] = s1[i];
		i++;
	}
	// temp -= total;
	return (temp);
}

