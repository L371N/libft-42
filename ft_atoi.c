/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:33:48 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/30 00:47:34 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sim;
	int		result;

	result = 0;
	sim = 1;
	if (!*str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sim *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sim);
}
/*
int main(int ac, char **av)
{
	int mine;
	int their;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		their = atoi(av[1]);
		printf("mine: %d | their: %d\n", mine, their);
	}
	return (0);
}*/
