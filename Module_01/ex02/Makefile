CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = THIS_IS_BRAIN

SRC = main.cpp
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
