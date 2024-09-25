# Nom de l'exécutable
NAME = easyfind

# Compilateur
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

# Fichiers source
SRCS = main.cpp

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut : compilation
all: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compilation des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Pour éviter que des fichiers ayant les noms de cibles (comme "clean") soient pris en compte
.PHONY: all clean fclean re
