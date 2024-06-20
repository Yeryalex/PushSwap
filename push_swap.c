/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:38:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/20 17:08:49 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	t_list	*stack;

	stack = ft_stack_numbers(argc, argv);
	while (stack)
	{
		printf("%li\n", stack->number);
		stack = stack->next;
	}
	return (0);
}
