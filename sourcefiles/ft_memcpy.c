/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:48:06 by tomas             #+#    #+#             */
/*   Updated: 2024/04/07 14:29:57 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char* pDest;
	const char* pSrc;

	pDest = dest;
	pSrc = src;
	if (!dest && !src)
		return (NULL);
	while (*pSrc && n != 0)
	{
		*(pDest++) = *pSrc++;
		n--;
	}
	return (dest);
}
