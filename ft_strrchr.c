/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:36:36 by brvasque          #+#    #+#             */
/*   Updated: 2024/01/17 15:26:11 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = ft_strlen(s);
	ch = (char)c;
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == ch)
		return ((char *)s + i);
	return (0);
}
