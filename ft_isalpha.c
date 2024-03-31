/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:54:15 by tomas             #+#    #+#             */
/*   Updated: 2024/03/31 14:18:29 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		result = 1;
	}
	return (result);
}


int main(void)
{
	char c = '\n';
	printf("%d\n", ft_isalpha(c));
	return (0);
}
