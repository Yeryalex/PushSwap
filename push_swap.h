/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:00:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/08 20:23:48 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long		number;
	struct s_list	*next;
}			t_list;

int		ft_atoi(char *str);
void	ft_lstadd_back(t_list **lst, t_list *node);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_stack_numbers(int argc, char **argv);
void	print_error(void);
int		ft_isdigit(int c);
int	ft_lstsize(t_list *lst);
int		ft_numberdup(t_list *lst);
int		ft_is_sorted(t_list *lst);
void	ft_sort_three(t_list **lst);
void	ft_swap_a(t_list **lst);
void	ft_rotate_a(t_list **lst);
void	ft_rev_rotate_a(t_list **lst);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_sorting(t_list **stack);

#endif
