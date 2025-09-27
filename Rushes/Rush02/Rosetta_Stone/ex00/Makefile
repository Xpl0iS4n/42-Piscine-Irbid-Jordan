# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 13:04:48 by ztawalbe          #+#    #+#              #
#    Updated: 2025/09/27 13:16:04 by ztawalbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c dictionary.c translate.c utils.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re
