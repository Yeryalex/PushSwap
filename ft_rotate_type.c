/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:30:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/15 22:16:13 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_rotate_type_ab(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_a;
	i = ft_case_rrarrb(stack_a, stack_b, stack_a->number);
	while (tmp)
	{
		if (i > ft_case_rarb(stack_a, stack_b, tmp->number))
			i = ft_case_rarb(stack_a, stack_b, tmp->number);
		if (i > ft_case_rrarrb(stack_a, stack_b, tmp->number))
			i = ft_case_rrarrb(stack_a, stack_b, tmp->number);
		if (i > ft_case_rarrb(stack_a, stack_b, tmp->number))
			i = ft_case_rarrb(stack_a, stack_b, tmp->number);
		if (i > ft_case_rrarb(stack_a, stack_b, tmp->number))
			i = ft_case_rrarb(stack_a, stack_b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_b;
	i = ft_case_rrarrb_a(stack_a, stack_b, stack_b->number);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stack_a, stack_b, tmp->number))
			i = ft_case_rarb_a(stack_a, stack_b, tmp->number);
		if (i > ft_case_rrarrb_a(stack_a, stack_b, tmp->number))
			i = ft_case_rrarrb_a(stack_a, stack_b, tmp->number);
		if (i > ft_case_rarrb_a(stack_a, stack_b, tmp->number))
			i = ft_case_rarrb_a(stack_a, stack_b, tmp->number);
		if (i > ft_case_rrarb_a(stack_a, stack_b, tmp->number))
			i = ft_case_rrarb_a(stack_a, stack_b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}
