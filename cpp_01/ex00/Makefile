SRC = Zombie.cpp randomChump.cpp  newZombie.cpp main.cpp

NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

$(NAME): Zombie.hpp $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

.PHONY: all re clean fclean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all
