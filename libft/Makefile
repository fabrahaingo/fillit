# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frahaing <frahaing@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/02 13:02:11 by frahaing          #+#    #+#              #
#    Updated: 2018/02/09 11:12:12 by frahaing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRC =		ft_putchar.c \
		ft_putstr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_strcutend.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_list_size.c \
		ft_count_words.c \
		ft_count_if.c \
		ft_strcapitalize.c \
		ft_list_merge.c \
		ft_swap.c \
		get_next_line.c \
		ft_dir_count.c \
		ft_dir_tab.c \
		ft_letter_there.c \
		ft_dir_there.c \
		ft_sort.c \
		ft_stocknextword.c \
		ft_path_up.c \
		ft_getenv.c \
		ft_setenv.c \
		ft_realloc.c \
		ft_strncpy_esc.c \
		ft_strchr_esc.c \
		ft_iswhitespace.c \
		ft_envinit.c \
		ft_tablen.c

OBJ =		$(SRC:.c=.o)

FLAG = -Wall -Wextra -g

HEADER =	libft.h

all :		$(NAME)

$(NAME) : $(OBJ)
			@ar rc $(NAME) $(OBJ)

%.o: %.c
			@gcc -c $< -o $@ $(FLAG)

clean :
			@rm -rf $(OBJ)

fclean :	clean
			@rm -rf $(NAME)

re :		fclean all
