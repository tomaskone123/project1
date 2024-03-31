/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:19:40 by tomas             #+#    #+#             */
/*   Updated: 2024/03/31 14:21:26 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if ((c >= '0' && c <= '9'))
	{
		result = 1;
	}
	return (result);
}


int main(void)
{
	char c = '9';
	printf("%d\n", ft_isdigit(c));
	return (0);
}
