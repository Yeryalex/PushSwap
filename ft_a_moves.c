/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:19:34 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 17:51:09 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_swap_a(t_list **lst, int j)
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
	if (j == 1)
		write(1, "sa\n", 3);
}

void	ft_rotate_a(t_list **lst, int j)
{
	t_list	*temp;

	if (!*lst || !(*lst)->next)
		return ;
	temp = *lst;
	*lst = ft_lstlast(*lst);
	(*lst)->next = temp;
	*lst = temp->next;
	temp->next = NULL;
	if (j == 1)
		write(1, "ra\n", 3);
}

void	ft_rev_rotate_a(t_list **lst, int j)
{
	t_list	*tmp;
	int		i;

	if (!*lst|| !(*lst)->next)
		return ;
	i = 0;
	tmp = *lst;
	while ((*lst)->next)
	{
		*lst = (*lst)->next;
		i++;
	}
	(*lst)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 1)
		write(1, "rra\n", 4);
/*	t_list	*first;
	t_list	*last;
	t_list	*prev_last;

	if (!*lst || !(*lst)->next)
		return ;
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
	if (j == 1)
		write(1, "rra\n", 4);
*/}
