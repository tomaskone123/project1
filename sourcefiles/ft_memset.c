/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:19:34 by tomas             #+#    #+#             */
/*   Updated: 2024/04/06 19:19:29 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char* 	ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int main(void)
{
	char str[] = "Hello, World!";
	ft_memset(str, 'x', 2);
	printf("%s\n", str);
}
