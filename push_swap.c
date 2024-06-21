/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:38:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/21 19:03:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	t_list	*stack;

	stack = ft_stack_numbers(argc, argv);
	if (ft_numberdup(stack))
		print_error();
	if (ft_is_sorted(stack))
		return (0);
	ft_rev_rotate_a(&stack);
	while (stack)
	{
		printf("%li\n", stack->number);
		stack = stack->next;
	}
	return (0);
}
