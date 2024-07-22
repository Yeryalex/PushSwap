/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:00:41 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/22 21:32:18 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			number;
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
int		ft_lstsize(t_list *lst);
int		ft_numberdup(t_list *lst);
int		ft_is_sorted(t_list *lst);
void	ft_sort_three(t_list **lst);
void	ft_swap_a(t_list **lst, int j);
void	ft_rotate_a(t_list **lst, int j);
void	ft_rev_rotate_a(t_list **lst, int j);
void	ft_swap_b(t_list **lst, int j);
void	ft_rotate_b(t_list **lst, int j);
void	ft_rev_rotate_b(t_list **lst, int j);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_ss(t_list **a, t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rrr(t_list **a, t_list **b);
int		ft_find_index(t_list *stack, int num);
int		ft_min(t_list *lst);
int		ft_max(t_list *lst);
int		ft_isdigit(int c);
void	ft_sorting(t_list **stack_a);
t_list	**ft_sort_a(t_list **stack_a, t_list **stack_b);
t_list	*ft_sort_b(t_list **stack);
void	ft_stack_till_three(t_list **stack_a, t_list **stack_b);
int		ft_find_index(t_list *stack, int num);
int		ft_find_place_b(t_list *stack_b, int num);
int		ft_find_place_a(t_list *stack_a, int num);

int		ft_rotate_type_ab(t_list *stack_a, t_list *stack_b);
int		ft_rotate_type_ba(t_list *stack_a, t_list *stack_b);

int		ft_case_rarb(t_list *stack_a, t_list *stack_b, int c);
int		ft_case_rrarrb(t_list *a, t_list *b, int c);
int		ft_case_rrarb(t_list *stack_a, t_list *stack_b, int c);
int		ft_case_rarrb(t_list *stack_a, t_list *stack_b, int c);

int		ft_case_rarb_a(t_list *stack_a, t_list *stack_b, int c);
int		ft_case_rrarrb_a(t_list *a, t_list *b, int c);
int		ft_case_rarrb_a(t_list *stack_a, t_list *stack_b, int c);
int		ft_case_rrarb_a(t_list *stack_a, t_list *stack_b, int c);

int		ft_apply_rarb(t_list **stack_a, t_list **stack_b, int c, char s);
int		ft_apply_rrarrb(t_list **stack_a, t_list **stack_b, int c, char s);
int		ft_apply_rarrb(t_list **stack_a, t_list **stack_b, int c, char s);
int		ft_apply_rrarb(t_list **stack_a, t_list **stack_b, int c, char s);
void	ft_free(t_list **lst);

#endif
