/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:09:03 by tomas             #+#    #+#             */
/*   Updated: 2024/04/09 16:40:33 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const char	*pS;
	unsigned char	value;

	value = (unsigned char)c;
	pS = s;
	while (*pS && (n != 0))
	{
		if (*pS == value)
			return((void *)pS);
		pS++;
	}
	return (NULL);
}
