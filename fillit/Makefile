# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstolz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 11:15:21 by dstolz            #+#    #+#              #
#    Updated: 2018/11/28 19:44:45 by dstolz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES	=	main.c	\
			read.c	\
			non_r_solve.c	

HEADERS = fillit.h	\

LIB =	inc/libft	\

SRC_DIR = src/

SRC = $(SOURCES:%=src/%) 
OBJ = $(SOURCES:%.c=%.o)

all: $(NAME) 

$(NAME): $(LIB)
	@make -C $(LIB)
	@echo "Compiled libft"
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(CC) $(OBJ) inc/libft/libft.a -o $(NAME)
	@echo "Compiled fillit"

debug:
	@make -C $(LIB)
	@$(CC) -g $(SRC) inc/libft/libft.a -o a.out
	@echo "Compiled fillit debug"

$(LIB):
	@make -C $(LIB)
	@echo "Compiled libft"

clean:
	@rm -rf $(OBJ)
	@make fclean -C $(LIB)
	@echo "Removed all object files"

fclean: clean
	@rm -rf a.*
	@echo "Removed all temp files"
	@rm -rf $(NAME)
	@echo "Removed executable"

re: fclean all
