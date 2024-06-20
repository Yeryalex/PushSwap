/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:24:56 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/20 20:30:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_is_sorted(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		while (temp)
		{
			if (lst->number > temp->number)
				return (0);
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (1);
}
