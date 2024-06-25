/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:48:13 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/25 19:58:41 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_numberdup(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		while (temp)
		{
			if (lst->number == temp->number)
				return (1);
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (0);
}
