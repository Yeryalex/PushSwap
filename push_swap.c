/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:38:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/21 20:28:44 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	t_list	*stack;
	t_list	*stack_b;

	stack = ft_stack_numbers(argc, argv);
	if (ft_numberdup(stack))
		print_error();
	if (ft_is_sorted(stack))
		return (0);
	stack_b = ft_lstnew(365);
	ft_push_a(&stack, &stack_b);
	 while (stack_b)
        {
                printf("%li\n", stack_b->number);
                stack_b = stack_b->next;
        }
 printf("======================================\n");

	while (stack)
	{
		printf("%li\n", stack->number);
		stack = stack->next;
	}
	return (0);
}
