/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:32:24 by brvasque          #+#    #+#             */
/*   Updated: 2024/02/01 10:47:45 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	str[] = "pepinillo";
	char	str_2[] = "pepinillo";


	printf("before: %s\n", str);
	ft_bzero(str, 0);
	printf("after: %s\n", str);

	printf("before: %s\n", str_2);
	bzero(str_2, 0);
	printf("after: %s\n", str_2);
	return (0);
}*/
