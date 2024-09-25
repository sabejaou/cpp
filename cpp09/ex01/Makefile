# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)
NAME = rpn_calculator
RM = rm -f

# Build target
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Clean object files
clean:
	$(RM) $(OBJ)

# Clean object files and executable
fclean: clean
	$(RM) $(NAME)

# Rebuild all
re: fclean all

.PHONY: all clean fclean re