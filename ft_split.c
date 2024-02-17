/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:09:52 by brvasque          #+#    #+#             */
/*   Updated: 2024/02/13 13:01:25 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	size_t	num_words;

	num_words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			num_words++;
		while (*s && *s != c)
			s++;
	}
	return (num_words);
}

static char	**free_array(char **array, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	start;
	size_t	pos;
	size_t	i;

	result = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[pos++] = ft_substr(s, start, i - start + 1);
			if (!result[pos - 1])
				return (free_array(result, pos - 1));
		}
		i++;
	}
	result[pos] = NULL;
	return (result);
}
/*
int main()
{
	char	**split;
	int		i;

	i = 0;
	split = ft_split("hola mundo", ' ');
	while (split[i])
	{
		printf("%s\n", split[i]);
	}
	return (0);
}*/

/*int main()
{
	char **split = ft_split("hola mundo", ' ');
	int i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i++]);
	}
	free(split);
	return (0);
}*/
