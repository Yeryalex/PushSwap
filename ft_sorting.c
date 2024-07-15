/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:08:44 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/15 22:04:24 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_stack_till_three(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_list	*ft_sort_b(t_list **stack)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(*stack))
		ft_push_b(stack, &stack_b);
	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(*stack))
		ft_push_b(stack, &stack_b);
	if (ft_lstsize(*stack) > 3 && !ft_is_sorted(*stack))
		ft_stack_till_three(stack, &stack_b);
	if (!ft_is_sorted(*stack))
		ft_sort_three(stack);
	return (stack_b);
}

t_list	**ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			  if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->number))
                                i = ft_apply_rarb(stack_a, stack_b, tmp->number, 'b');
                        else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->number))
                                i = ft_apply_rrarrb(stack_a, stack_b, tmp->number, 'b');
                        else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->number))
                                i = ft_apply_rarrb(stack_a, stack_b, tmp->number, 'b');
                        else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->number))
                                i = ft_apply_rrarb(stack_a, stack_b, tmp->number, 'b');
                        else
                                tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sorting(t_list **stack)
{
	t_list	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack) == 2)
		ft_swap_a(stack, 1);
	else
	{
		stack_b = ft_sort_b(stack);
		stack = ft_sort_a(stack, &stack_b);
		i = ft_find_index(*stack, ft_min(*stack));
		if (i < ft_lstsize(* stack) - i)
		{
			while ((*stack)->number != ft_min(*stack))
				ft_rotate_a(stack, 1);
		}
		else
		{
			while ((*stack)->number != ft_min(*stack))
				ft_rev_rotate_a(stack, 1);
		}
	}
}
