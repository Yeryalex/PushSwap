/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:52:11 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/08 20:53:04 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_min(t_list *lst)
{
	int	value;
	
	value = lst->number;
	while (lst)
	{
		if (value > lst->number)
			value = lst->number;
		lst = lst->next;
	}
	return (value);
}

int	ft_max(t_list *lst)
{
	int	value;

	value = lst->number;
	while (lst)
	{
		if (value < lst->number)
			value = lst->number;
		lst = lst->next;
	}
	return (value);
}

int	ft_find_index(t_list *stack, int number)
{
	int	i;

	i = 0;
	while (stack->number != number)
	{
		i++;
		stack = stack->next;
	}
	stack->index = 0;
	return (i);
}

void	ft_sort_three(t_list **stack)
{
	if (ft_min(*stack) == (*stack)->number)
	{
		ft_rev_rotate_a(stack);
		ft_swap_a(stack);	
	}
	else if (ft_max(*stack) == (*stack)->number)
	{
		ft_rotate_a(stack);
		if (!ft_is_sorted(*stack))
			ft_swap_a(stack);
	}
	else
	{
		if (ft_find_index(*stack, ft_max(*stack)) == 1)
			ft_rev_rotate_a(stack);
		else
			ft_swap_a(stack);
	}
}
