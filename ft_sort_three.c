/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:52:11 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/08 20:40:39 by yrodrigu         ###   ########.fr       */
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
}
