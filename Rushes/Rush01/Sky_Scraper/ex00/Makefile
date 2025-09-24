# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 17:34:46 by ztawalbe          #+#    #+#              #
#    Updated: 2025/09/20 09:25:19 by ztawalbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-01
SRC = main.c parse.c utils.c check_utils.c check_views.c solve.c view.c view_utils.c
OBJ = $(SRC:.c=.o)

all: clean $(NAME)

$(NAME): $(OBJ)
	cc -Wall -Wextra -Werror -o $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	@echo "Removing object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing executable..."
	@rm -f $(NAME)

re: fclean all
