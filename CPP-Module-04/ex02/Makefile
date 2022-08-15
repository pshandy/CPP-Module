NAME	= Program

SRCS	= ./classes/Animal.cpp ./classes/Cat.cpp ./classes/Dog.cpp ./classes/WrongAnimal.cpp ./classes/WrongCat.cpp ./classes/Brain.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all