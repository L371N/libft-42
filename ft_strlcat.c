/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:18:25 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/16 16:29:57 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*s;
	size_t		sl;
	size_t		dl;
	size_t		i;
	size_t		r;

	i = 0;
	r = 0;
	s = (char *)src;
	sl = ft_strlen(s);
	dl = ft_strlen(dst);
	if (size > dl)
		r = sl + dl;
	else
		r = sl + size;
	while (s[i] && (dl + 1) < size)
	{
		dst[dl] = s[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (r);
}
/*
#include <stdio.h>

int main(void)
{
    char destino[20] = "hola, ";
    const char *origen = "mundo!";

    size_t longitud = ft_strlcat(destino, origen, sizeof(destino));
    printf("cadena concatenada: %s\n", destino);
    printf("longitud: %zu\n", longitud);

    return 0;
}*/
