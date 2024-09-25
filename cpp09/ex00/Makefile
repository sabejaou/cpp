# Variables
NAME = btc
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

# Règle principale pour compiler le programme
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compilation des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyer les fichiers objets
clean:
	$(RM) $(OBJ)

# Supprimer l'exécutable et les objets
fclean: clean
	$(RM) $(NAME)

# Recompiler depuis le début
re: fclean all

# Indique que les règles n'ont pas besoin de fichier
.PHONY: all clean fclean re
