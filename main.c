/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/07 12:10:43 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	c[50] = "hello world";
	char	d = 'a';

	bzero(c + 3, 1);
	// memset(c, 'd', 8*sizeof(char));
	// printf("%c\n", ft_tolower(d));
	// printf("%s\n", ft_strchr(c, d));
	printf("%s\n", c);
	return 0;
}
