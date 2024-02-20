NAME = bsp

INC =	Fixed.hpp \
	Point.hpp
	
CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp \
	Fixed.cpp \
	Point.cpp \
	bsp.cpp
	

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
