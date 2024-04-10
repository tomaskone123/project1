/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/04 21:01:17 by tomas            ###   ########.fr       */
=======
/*   Updated: 2024/04/09 17:57:57 by tomas            ###   ########.fr       */
>>>>>>> 9accedb628e6b99a7c834005f2472fba49453b43
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
<<<<<<< HEAD
	const char	c[50] = "Hello world";
	const char	d = 'l';

	// memset(c, 'd', 8*sizeof(char));
	printf("%s\n", strchr(c, d));
=======
	const char	*c = "hello world";
	// const char	*d = "";
	// int c = (char*) d;
	const char *i = ft_memchr(c, 'o', ft_strlen(c));
	printf("%s\n", i);
>>>>>>> 9accedb628e6b99a7c834005f2472fba49453b43
	return 0;
}
