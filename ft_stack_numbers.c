/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:02:46 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/25 20:51:43 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*ft_stack_numbers(int argc, char **argv)
{
	t_list	*stack;
	int		i;
	int		j;

	stack = NULL;
	if (argc < 2)
		print_error();
	i = 1;
	while (i < argc)
	{
		j = ft_atoi(argv[i]);
		ft_lstadd_back(&stack, ft_lstnew(j));
		i++;
	}
	return (stack);
}
