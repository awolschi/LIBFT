# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 14:37:02 by awolschi          #+#    #+#              #
#    Updated: 2024/04/05 21:35:17 by awolschi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c

OFILES = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OFILES)
	ar rsc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean:	clean
	rm -f $(NAME)

re:
	fclean $(NAME)

.PHONY:	all clean fclean re
