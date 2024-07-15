/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:31:45 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/15 21:18:10 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_case_rarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = ft_find_place_b(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}

int	ft_case_rrarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	if ((i < (ft_lstsize(stack_a) - ft_find_index(stack_a, c))) && ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	return (i);
}

int	ft_case_rrarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = ft_find_place_b(stack_b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}
