# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstolz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 08:08:33 by dstolz            #+#    #+#              #
#    Updated: 2018/10/14 12:22:26 by dstolz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = libft

CHECK	=	ft_isdigit.c	\
			ft_isalpha.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\

LST		=	ft_lstadd.c		\
			ft_lstdel.c		\
			ft_lstdelone.c	\
			ft_lstiter.c	\
			ft_lstmap.c		\
			ft_lstnew.c		\
			ft_lstrev.c		\

MEM		=	ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memalloc.c	\
			ft_memdel.c		\
			ft_memset.c		\

NUM		=	ft_itoa.c		\
			ft_numlen.c		\
			ft_atoi.c		\

PRINT	=	ft_putchar.c	\
			ft_putstr.c		\
			ft_putendl.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putnbr.c		\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

STR		=	ft_strchr.c		\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_strcpy.c		\
			ft_strdup.c		\
			ft_strlen.c		\
			ft_strncpy.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_bzero.c		\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_strnstr.c	\
			ft_strclr.c		\
			ft_strdel.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strequ.c		\
			ft_strnequ.c	\
			ft_strsub.c		\
			ft_strnew.c		\
			ft_strrev.c		\
			ft_strtrim.c	\
			ft_strjoin.c	\
			ft_strsplit.c	\

SRC =	$(CHECK:%=check/%)	\
		$(LST:%=lst/%)		\
		$(MEM:%=mem/%)		\
		$(NUM:%=num/%)		\
		$(PRINT:%=print/%)	\
		$(STR:%=str/%)		\

OBJ =	$(CHECK:%.c=%.o)	\
		$(LST:%.c=%.o)		\
		$(MEM:%.c=%.o)		\
		$(NUM:%.c=%.o)		\
		$(PRINT:%.c=%.o)	\
		$(STR:%.c=%.o)		\

INC = libft.h

all: comp $(NAME) clean

comp:
	$(CC) $(CFLAGS) $(SRC) -I $(INC)

$(NAME): comp
	ar rcs $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME).a
	rm -rf a.out.dSYM/
	rm -f a.out

re: fclean all
