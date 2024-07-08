/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:08:44 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/08 20:59:28 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_stack_till_three()
{

}

t_list	*ft_sort_b(t_list **stack)
{
	t_list	*stack_b;

	stack_b = NULL;

	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(stack))
		ft_push_b(stack, &stack_b);
	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(stack))
		ft_push_b(stack, &stack_b);
	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(stack))
		ft_stack_till_three(stack, &stack_b);
	if (!ft_is_sorted(stack))
		ft_sort_three(stack);
	return (stack_b);
}

void	ft_sorting(t_list **stack)
{
	t_list	*stack_b;

	stack_b = NULL;

	if (ft_lstsize(*stack) == 2)
		ft_swap_a(stack);
	else 
	{
		stack_b = ft_sort_b(stack);
	}
}
