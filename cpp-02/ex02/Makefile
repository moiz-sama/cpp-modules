NAME = Fixed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp Fixed_arithmitics.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
