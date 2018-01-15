# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chtual <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/15 15:58:48 by chtual            #+#    #+#              #
#    Updated: 2018/01/15 19:25:35 by chtual           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc 
FLAG = -Wall -Wextra -Werror
SRC = 	ft_strlen.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putnbr.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c \
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strjoin\.c\
		ft_strsplit\.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstnew.c\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	@$(CC) $(FLAG) -c $(SRC) -I libft.h
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@make done

clean :
	@rm -f $(OBJ)
	@make done

fclean : clean
	@rm -f $(NAME)

re : fclean all

done :
	@echo "DONE !"
