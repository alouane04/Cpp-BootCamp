# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariahi <ariahi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 14:30:53 by ariahi            #+#    #+#              #
#    Updated: 2022/09/21 11:34:38 by ariahi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

.PHONY: all re clean fclean bonus

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	