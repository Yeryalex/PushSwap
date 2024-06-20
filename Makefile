# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 18:02:07 by yrodrigu          #+#    #+#              #
#    Updated: 2024/06/20 17:36:59 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = 	 ft_atoi.c\
		 ft_lstadd_back.c\
		 ft_lstadd_front.c\
		 ft_lstnew.c\
		 ft_stack_numbers.c\
		 ft_lstlast.c\
		 print_error.c\
		 ft_isdigit.c\

OFILES = $(CFILES:.c=.o)

NAME = push_swap.a

all: $(NAME)

$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES)

%.o: %.c push_swap.h Makefile
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
