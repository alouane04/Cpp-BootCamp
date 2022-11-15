SRC = phonebook.cpp contact.cpp  main.cpp 

NAME = phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

$(NAME): contact.hpp phonebook.hpp $(OBJ) 
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

%.o : %.cpp 
	${CC} ${FLAGS} -c $<

.PHONY: all re clean fclean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all
