/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:27:01 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 21:16:12 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap_a(stack_a, 0);
	ft_swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_a(stack_a, 0);
	ft_rotate_b(stack_b, 0);
	write(1, "rr\n", 3);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rev_rotate_a(stack_a, 0);
	ft_rev_rotate_b(stack_b, 0);
	write(1, "rrr\n", 4);
}
