/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:01:28 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/16 15:11:02 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dp;

	dp = dest;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dp);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char source[] = "hola, mundo!";
	char destination[20];

	ft_memmove(destination, source, strlen(source) + 1);
	printf("Resultado: %s\n", destination);
	return (0);
}*/
