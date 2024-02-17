/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:14:25 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/15 11:56:31 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	x;

	i = 0;
	ptr = (unsigned char *)str;
	x = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = "hola mundo";
	int c = '*';
	size_t n = 4;

	printf("antes: %s\n", str);
	ft_memset(str, c, n);
	printf("despues: %s\n", str);

	return (0);
}*/
