/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:31:14 by tomas             #+#    #+#             */
/*   Updated: 2024/04/23 17:48:53 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char    *tset;
    char    *ts1;
    size_t    i;
    char    *end;
    char    *endset;

    ts1 = (char *)malloc(strlen(s1) * sizeof(char) + 1);
    tset = (char *)malloc(strlen(set) * sizeof(char) + 1);
    strcpy(ts1, s1);
    strcpy(tset, set);
    i = strlen(set);
    while ((*ts1 == *tset) && ((*tset++) == (*ts1++)))
    {
        if (*ts1 != *tset)
            break;
    }
    endset = tset + strlen(tset);
    end = ts1 + strlen(ts1);
    while ((end > ts1) && (*end == *endset) && ((*end--) == (*endset--)) && (i != 0))
    {
        if (*endset != *end)
          break;
		i--;
    }
	end++;
	*end = 0;
    return (ts1);
}

int main(void)
{
    const char *s = "Hello world";
    const char *c = "He";
    char *r = ft_strtrim(s, c);
    printf("%s\n", r);
}
