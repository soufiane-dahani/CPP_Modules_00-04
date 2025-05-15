CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Human

SRC = main.cpp  Weapon.cpp  HumanA.cpp HumanB.cpp 
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
