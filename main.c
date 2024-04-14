/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/11 14:33:09 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	const char *s = "aHello worlda";
	const char *set = "H";

	char *new = ft_strtrim(s, set);

	printf("%s\n", new);
	return (0);
}
