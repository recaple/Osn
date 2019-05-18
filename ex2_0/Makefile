# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 16:08:29 by cflaxsee          #+#    #+#              #
#    Updated: 2019/04/05 16:08:33 by cflaxsee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
INCLUDES =includes/ft.h
SRCS=srcs/*.c
OBJECTS=*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SRCS)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

