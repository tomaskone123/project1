/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/30 18:50:50 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// int main(void)
// {
// 	int		c;
// 	char	*s;

// 	c = -4321;
// 	s = ft_itoa(c);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
// char f(unsigned int i, char s)
// {
// 	printf("My inner function: index = %d and %c\n", i, s);
// 	return s - 32;
// }

int main(void)
{

	char *str = "Hello";
	printf("The result is %s\n", str);
	char *s = ft_strmapi(str, f);
	printf("The result is %s\n", s);
	free(s);
	return 0;
}
