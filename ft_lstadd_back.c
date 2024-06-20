/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:41:24 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/20 17:28:02 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	if (!lst)
		return;
	if (!*lst)
		*lst = node;
	else
		ft_lstlast(*lst)->next = node;
	node->next = NULL;
}
