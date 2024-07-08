/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:38:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/08 20:39:13 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	t_list	*stack;
//	t_list	*stack_b;
//	t_list	*temp_a;
//	t_list	*temp_b;

	stack = ft_stack_numbers(argc, argv);
	if (ft_numberdup(stack))
		print_error();
	if (ft_is_sorted(stack))
		return (0);
	ft_sort_three(&stack);
/*	ft_sorting(&stack);*/
	while (stack)
	{
		printf("%li\n", stack->number);
		stack = stack->next;
	}	
/*	stack_b = NULL;

	ft_push_a(&stack, &stack_b);
	ft_push_a(&stack, &stack_b);
	ft_push_a(&stack, &stack_b);
	temp_b = stack_b;	
       	while (stack_b)
        {
                printf("%li\n", stack_b->number);
                stack_b = stack_b->next;
        }
 	stack_b = temp_b;
	printf("======================================\n");
	ft_push_b(&stack, &stack_b);
	ft_push_b(&stack, &stack_b);
	ft_push_b(&stack, &stack_b);
	while (stack)
	{
		printf("%li\n", stack->number);
		stack = stack->next;
	}
*/
	return (0);
}
