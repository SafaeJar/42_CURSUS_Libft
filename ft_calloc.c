/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:00:51 by sjarfi            #+#    #+#             */
/*   Updated: 2023/11/13 18:11:09 by sjarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*str;

	str = (char *)malloc(size * num);
	if (!str)
		return (NULL);
	ft_bzero(str, num * size);
	return (str);
}
/*
#include <stdio.h>

int main() {
    char *str;

    size_t size = 10;
    str = (char *)calloc(size, sizeof(char));

    if (!str) {
        printf("Échec.\n");
        return 1;
    }
    printf("Contenu initial %s\n", str);

    free(str);

    return 0;
}
*/