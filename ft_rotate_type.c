/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:30:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/11 17:35:39 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_rotate_type_ab(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->nbr))
			i = ft_case_rarb(a, b, tmp->nbr);
		if (i > ft_case_rrarrb(a, b, tmp->nbr))
			i = ft_case_rrarrb(a, b, tmp->nbr);
		if (i > ft_case_rarrb(a, b, tmp->nbr))
			i = ft_case_rarrb(a, b, tmp->nbr);
		if (i > ft_case_rrarb(a, b, tmp->nbr))
			i = ft_case_rrarb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->nbr))
			i = ft_case_rarb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_a(a, b, tmp->nbr))
			i = ft_case_rrarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rarrb_a(a, b, tmp->nbr))
			i = ft_case_rarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarb_a(a, b, tmp->nbr))
			i = ft_case_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
