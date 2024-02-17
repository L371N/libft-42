/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:25:08 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/23 16:08:49 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_array(int n)
{
	int	array_size;

	array_size = 1;
	if (n < 0)
		array_size++;
	while (n)
	{
		n /= 10;
		array_size++;
	}
	return (array_size);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		array_size;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	array_size = itoa_array(n);
	result = malloc(sizeof(char) * array_size);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		result[0] = '-';
	}
	result[--array_size] = '\0';
	while (n)
	{
		result[--array_size] = '0' + (n % 10 * sign);
		n /= 10;
	}
	return (result);
}
