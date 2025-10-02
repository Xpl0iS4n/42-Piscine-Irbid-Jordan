# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/02 07:14:15 by ztawalbe          #+#    #+#              #
#    Updated: 2025/10/02 07:14:32 by ztawalbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
SRC_DIR     = src
INC_DIR     = includes
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I$(INC_DIR)

SRC         = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ         = $(SRC:%.c=$(SRC_DIR)/%.o)
LIB         = ar rcs

MAIN        = main.c
MAIN_BIN    = main

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN_BIN): $(NAME) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(MAIN_BIN)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(MAIN_BIN)

re: fclean all
