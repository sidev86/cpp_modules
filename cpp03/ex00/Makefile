NAME = claptrap

INC =	ClapTrap.hpp
	
CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp \
	ClapTrap.cpp
	

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
