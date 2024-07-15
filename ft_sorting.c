/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:08:44 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/15 19:47:34 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_stack_till_three(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;
	int i;

	i = ft_rotate_case_ab(stack_a, stack_b);
	while (i >= 0)
	{
		if (i > ft_case_rarb(stack_a, stack_b))
			i = ft_apply_rarb;
	}
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
		ft_swap_a(stack, 1);
	else
	{
		stack_b = ft_sort_b(stack);
	}
}
