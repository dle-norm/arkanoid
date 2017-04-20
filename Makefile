# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/29 14:20:03 by dle-norm          #+#    #+#              #
#    Updated: 2015/05/02 18:05:28 by dle-norm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arkanoid

SRC = main.c arkanoid.c list.c get_next_line.c object.c map.c arkanoid2.c

SRO = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :
	Make -C libft/
	git submodule init
	git submodule update
	cmake -B./glfw -H./glfw
	make -C ./glfw
	gcc -c $(SRC) -I libft/ -I ./ -I glfw/include/GLFW/
	gcc -o $(NAME) $(SRO) -L libft/ -lft -L./glfw/src -lglfw3  -framework glut -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

clean :
	Make -C libft/ clean
	make -C ./glfw clean
	rm -f $(SRO)

fclean : clean
	Make -C libft/ fclean
	rm -f $(NAME)

re : fclean all
