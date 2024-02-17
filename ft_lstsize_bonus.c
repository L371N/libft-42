/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:25:41 by brvasque          #+#    #+#             */
/*   Updated: 2024/02/14 08:37:34 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		node_num;
	t_list	*tmp;

	node_num = 0;
	tmp = (t_list *)lst;
	while (tmp)
	{
		node_num++;
		tmp = tmp->next;
	}
	return (node_num);
}
