# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 14:30:53 by ariahi            #+#    #+#              #
#    Updated: 2022/11/15 18:02:38 by ariahi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

%.o : %.cpp 
	${CC} ${FLAGS} -c $<

.PHONY: all re clean fclean bonus

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	