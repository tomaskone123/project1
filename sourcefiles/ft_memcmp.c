/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:50 by tomas             #+#    #+#             */
/*   Updated: 2024/04/09 17:01:24 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pS1;
	const unsigned char	*pS2;

	pS1 = s1;
	pS2 = s2;
	while (*pS1 && (n != 0))
	{
		if (*pS1 != *pS2)
			return (*pS1 - *pS2);
		*pS1++;
		*pS2++;
	}
	return (*pS1 - *pS2);
}
