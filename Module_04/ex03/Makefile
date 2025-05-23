CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ./a.out

SRC = main.cpp AMateria.cpp  ICharacter.cpp IMateriaSource.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
