/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:55:38 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/23 16:02:04 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (argc < 2)
		return (0);
	stack_a = ft_stack_numbers(argc, argv);
	if (!stack_a || ft_numberdup(stack_a))
	{
		ft_free(&stack_a);
		print_error();
	}
	if (!ft_is_sorted(stack_a))
		ft_sorting(&stack_a);
	ft_free(&stack_a);
	return (0);
}
