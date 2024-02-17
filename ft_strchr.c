/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:22:11 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/17 13:39:08 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	c;
	char	*s;

	i = 0;
	c = (char)ch;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (s + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char *str = "hola mundo";
	int buscador = 'x';

	char *resultado = ft_strchr(str, buscador);
	if (resultado != NULL)
	{
		printf("el caracter '%c' fue encontrado %s\n", buscador, resultado);
	}
	else 
	{
		printf("el caracter '%c' no fue encontrado.\n", buscador);
	}
	return (0);
}*/
