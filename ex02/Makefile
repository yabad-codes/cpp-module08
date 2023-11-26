SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

NAME = mutantStack

$(NAME): $(OBJ) $(wildcard *.hpp)
	$(CC) $(CXXFLAGS) $(OBJ) -o $@

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re