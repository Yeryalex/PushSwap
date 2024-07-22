/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:26:25 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 20:50:42 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_apply_rarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->number != c && ft_find_place_b(*stack_b, c) > 0)
			ft_rr(stack_a, stack_b);
		while ((*stack_a)->number != c)
			ft_rotate_a(stack_a, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			ft_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->number != c && ft_find_place_a(*stack_a, c) > 0)
			ft_rr(stack_a, stack_b);
		while ((*stack_b)->number != c)
			ft_rotate_b(stack_b, 1);
		while (ft_find_place_a(*stack_a, c) > 0)
			ft_rotate_a(stack_a, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->number != c && ft_find_place_b(*stack_b, c) > 0)
			ft_rrr(stack_a, stack_b);
		while ((*stack_a)->number != c)
			ft_rev_rotate_a(stack_a, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			ft_rev_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->number != c && ft_find_place_a(*stack_a, c) > 0)
			ft_rrr(stack_a, stack_b);
		while ((*stack_b)->number != c)
			ft_rev_rotate_b(stack_b, 1);
		while (ft_find_place_a(*stack_a, c) > 0)
			ft_rev_rotate_a(stack_a, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rrarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->number != c)
			ft_rev_rotate_a(stack_a, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			ft_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			ft_rev_rotate_a(stack_a, 1);
		while ((*stack_b)->number != c)
			ft_rotate_b(stack_b, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}

int	ft_apply_rarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*stack_a)->number != c)
			ft_rotate_a(stack_a, 1);
		while (ft_find_place_b(*stack_b, c) > 0)
			ft_rev_rotate_b(stack_b, 1);
		ft_push_b(stack_a, stack_b);
	}
	else
	{
		while (ft_find_place_a(*stack_a, c) > 0)
			ft_rotate_a(stack_a, 1);
		while ((*stack_b)->number != c)
			ft_rev_rotate_b(stack_b, 1);
		ft_push_a(stack_a, stack_b);
	}
	return (-1);
}
