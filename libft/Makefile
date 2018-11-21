# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 15:09:14 by kfalia-f          #+#    #+#              #
#    Updated: 2018/11/20 15:29:06 by kfalia-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE =	srcs/ft_putchar.c /
			srcs/ft_putnbr.c /
			srcs/ft_putstr.c /
			srcs/ft_strcmp.c /
			srcs/ft_strlen.c /
			srcs/ft_swap.c /
			srcs/ft_strdup.c /
			srcs/ft_atoi.c /
			srcs/
			srcs/
			srcs/
			srcs/
			srcs/
			srcs/
			srcs/
			srcs/
			srcs/

HEADERS = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): comp
	@ar rc $(NAME) *.o

comp: 
	@gcc -c $(FLAGS) -I$(HEADERS) $(SOURCE)

clean: 
	@/bin/rm -rf *.o

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
