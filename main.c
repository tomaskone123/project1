/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/08 14:54:39 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	const char	c[50] = "hello world";
	const char	*d = "hello world";

	printf("%d\n", ft_strncmp(c, d, 6));
	return 0;
}
