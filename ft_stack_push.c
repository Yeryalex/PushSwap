/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:40:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 15:38:28 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	write(1, "pa\n", 3);
}

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	write(1, "pb\n", 3);
}
/*
t_list	*ft_push_node(t_list **lst)
{
	int	value;

	value = (*lst)->number;
	*lst = (*lst)->next;
	return (ft_lstnew(value));
}

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	if (!*stack_a)
		return ;
	node = ft_push_node(stack_a);
	ft_lstadd_front(stack_b, node);
	write(1, "pb\n", 3);
}

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	if (!*stack_b)
		return ;
	node = ft_push_node(stack_b);
	ft_lstadd_front(stack_a, node);
	write(1, "pa\n", 3);

}*/
