/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:32:11 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/10 17:34:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_find_index(t_list *stack, int num)
{
	int	i;

	i = 0;
	while (stack->number != num)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
