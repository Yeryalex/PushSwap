# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 18:02:07 by yrodrigu          #+#    #+#              #
#    Updated: 2024/07/23 16:36:16 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = 	 push_swap.c\
		 ft_atoi.c\
		 ft_lstadd_back.c\
		 ft_lstadd_front.c\
		 ft_lstnew.c\
		 ft_stack_numbers.c\
		 ft_lstlast.c\
		 print_error.c\
		 ft_isdigit.c\
		 ft_numberdup.c\
		 ft_lstsize.c\
		 ft_is_sorted.c\
		 ft_sort_three.c\
		 ft_a_moves.c\
		 ft_b_moves.c\
		 ft_move_ab.c\
		 ft_stack_push.c\
		 ft_find_index.c\
		 ft_sorting.c\
		 ft_cases_ab.c\
		 ft_cases_ba.c\
		 ft_apply_cases.c\
		 ft_rotate_type.c\
		 ft_free.c\

OFILES = $(CFILES:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)


%.o: %.c push_swap.h 
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
