# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrabeari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 12:36:11 by rrabeari          #+#    #+#              #
#    Updated: 2024/03/16 11:56:48 by rrabeari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_puthexa.c \
		ft_write.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC)
	cc -c -Wall -Werror -Wextra $(SRC)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all $(NAME) clean fclean re
