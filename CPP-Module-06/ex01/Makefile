SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= g++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Program

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re