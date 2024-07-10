/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:32:11 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/10 18:20:19 by yrodrigu         ###   ########.fr       */
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

int	ft_find_place_b(t_list *stack_b, int num)
{
	int	i;
	t_list	*temp;

	i = 1;
	if (num > stack_b->number && num < ft_lstlast(stack_b)->nbr)
		i = 0;
	else if (num > ft_max(stack_b) || num < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		temp = stack_b->next;
		while (stack_b->number < num || tem->number > num)
		{
			stack_b = stack_b->next;
			temp = stack_b->next;
			i++;
		}
	}
	return (i);
}
