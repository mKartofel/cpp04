# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 15:56:05 by vfiszbin          #+#    #+#              #
#    Updated: 2022/07/29 16:46:37 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS =	main.cpp\
		Animal.cpp\
		WrongAnimal.cpp\
		Cat.cpp\
		WrongCat.cpp\
		Dog.cpp\

OBJS = ${SRCS:.cpp=.o}

INCLUDES =	Animal.hpp\
			WrongAnimal.hpp\
			Cat.hpp\
			WrongCat.hpp\
			Dog.hpp\

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME} : ${INCLUDES} ${OBJS}
	
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re