/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/10 17:36:53 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
	const char	c[] = "Hello world";
	char *s = ft_strdup(c);

	// memset(c, 'd', 8*sizeof(char));
	printf("%s\n", s);
	free (s);
	return 0;
}
