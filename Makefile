# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/02 13:02:11 by frahaing          #+#    #+#              #
#    Updated: 2017/11/23 17:09:28 by rkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fillit

LIB =		libft.a

SRC =		main.c \
			ft_validity_check_four.c \
			ft_validity_check_rmlines.c \
			ft_validity_check_split.c \
			ft_validity_check_fresh.c \
			ft_check_placement.c \
			ft_deletetetris.c \
			ft_fillit.c \
			ft_fillstring.c \
			ft_isopper.c \
			ft_sqrtupper.c \
			ft_squaremin.c \
			ft_validity_check_alpha.c

LIB_SRC = 	./libft/ft_putstr.c \
			./libft/ft_putchar.c \
		   	./libft/ft_strsplit.c\
		    ./libft/ft_strsub.c \
			./libft/ft_strlen.c \
			./libft/ft_strcpy.c \
			./libft/ft_memalloc.c \
			./libft/ft_bzero.c

HEADER =	fillit.h

LIB_OBJ =	ft_putstr.o \
			ft_putchar.o \
			ft_strsplit.o \
			ft_strsub.o \
			ft_strlen.o \
			ft_strcpy.o \
			ft_memalloc.o \
			ft_bzero.o

FLAG = 		-Wall -Werror -Wextra

all :		$(NAME)

$(NAME) :	$(LIB_SRC) $(HEADER)
			@gcc -c $(LIB_SRC)
			@ar rc $(LIB) $(LIB_OBJ)
			@ranlib $(LIB)
			@gcc $(SRC) -L. -lft $(FLAG) -o $(NAME)

clean :
			@/bin/rm -f $(LIB_OBJ)

fclean :	clean
			@/bin/rm -rf $(NAME) $(LIB)

re :		fclean $(NAME)

.PHONY: all clean fclean re
