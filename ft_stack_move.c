/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:19:34 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/25 20:47:17 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

void	ft_swap_a(t_list **lst)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = *lst;
	temp2 = temp->next;
	temp3 = temp2->next;
	temp2->next = temp;
	temp->next = temp3;
	*lst = temp2;
}

void	ft_rotate_a(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = ft_lstlast(*lst);
	(*lst)->next = temp;
	*lst = temp->next;
	temp->next = NULL;
}

void	ft_rev_rotate_a(t_list **lst)
{
	t_list	*first;
	t_list	*last;
	t_list	*prev_last;

	first = *lst;
	last = *lst;
	prev_last = NULL;
	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}
	last->next = first;
	*lst = last;
	prev_last->next = NULL;
}
