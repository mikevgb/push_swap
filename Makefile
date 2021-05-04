# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvillaes <mvillaes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 17:20:55 by mvillaes          #+#    #+#              #
#    Updated: 2021/05/03 20:51:08 by mvillaes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	main.c \
		allo.c \
		./moves/move_r.c \
		./moves/move_rr.c \
		./moves/move_s.c \
		./moves/move_p.c \
		dp_calc.c


OBJ = $(SRC:.c=.o)

CFLAG = -Wall -Werror -Wextra

SANIT = -g3 -fsanitize=address

$(NAME):
	gcc $(CFLAG) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

debug:
	gcc $(CFLAG) $(SANIT) $(SRCS) -o $(NAME)

re: fclean all

.PHONY: all clean fclean re