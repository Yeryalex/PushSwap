/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:00:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/20 18:55:32 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	long		number;
        struct  s_list  *next;
}                       t_list;


int	ft_atoi(char *str);
void	ft_lstadd_back(t_list **lst, t_list *node);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_stack_numbers(int argc, char **argv);
void	print_error(void);
int	ft_isdigit(int c);
int	ft_numberdup(t_list *lst);

#endif
