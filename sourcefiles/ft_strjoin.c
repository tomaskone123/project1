/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:15:53 by tomas             #+#    #+#             */
/*   Updated: 2024/04/11 12:24:45 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*new;

	total = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(total * sizeof(char));
	if (new == NULL)
		return NULL;
	while (*s1)
		s1++;


}
