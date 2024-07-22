/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:35:00 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 21:31:23 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_case_rarb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = ft_find_place_a(stack_a, c);
	if (i < ft_find_index(stack_b, c))
		i = ft_find_index(stack_b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ft_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_lstsize(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_index(stack_b, c);
	i = ft_find_place_a(stack_a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_place_a(stack_a, c);
	i = ft_find_index(stack_b, c) + i;
	return (i);
}
