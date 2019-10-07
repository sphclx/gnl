# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburl <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 19:30:25 by mburl             #+#    #+#              #
#    Updated: 2019/09/18 15:52:18 by mburl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_memalloc.c \
	  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
	  ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c ft_strclr.c \
	  ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_striter.c \
	  ft_striteri.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strncat.c \
	  ft_strncmp.c ft_strncpy.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
	  ft_strstr.c ft_tolower.c ft_toupper.c ft_strmapi.c ft_strequ.c \
	  ft_strsub.c ft_strjoin.c ft_strnequ.c ft_strtrim.c ft_itoa.c \
	  ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
	  ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	  ft_strsplit.c ft_strnch.c ft_intlen.c ft_countwords.c ft_chrcmp.c

OBJJ = $(SRCS:.c=.o)

INCLUDES = ./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
