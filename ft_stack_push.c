/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:40:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/09 16:50:52 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

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
}

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_b)
		return ;
	t_list	*node;

	node = ft_push_node(stack_b);
	ft_lstadd_front(stack_a, node);
}
