NAME = materia

INC =	AMateria.hpp \
	Ice.hpp \
	Cure.hpp \
	ICharacter.hpp
	
CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRC =	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	ICharacter.cpp

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
