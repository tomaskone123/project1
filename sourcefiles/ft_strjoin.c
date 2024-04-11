/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:15:53 by tomas             #+#    #+#             */
/*   Updated: 2024/04/11 13:36:47 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*temp;

	total = ft_strlen(s1) + ft_strlen(s2); // prepsat strlen
	temp = (char *)malloc(total * sizeof(char));
	if (temp == NULL)
		return NULL;
	while (*s1)
		*(temp++) = *(s1++);
	while (*s2)
		*(temp++) = *(s2++);
	temp -= total;
	return (temp);
}

// int main(void)
// {
// 	const char *a = "hello ";
// 	const char *b = "world";
// 	char *n;

// 	n = ft_strjoin(a, b);
// 	printf("%s\n", n);
// }
