/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:53:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/19 19:56:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list ft_lstnew(void *content)
{
	t_list	*lst;
	
	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
