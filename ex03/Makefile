NAME = Polymorphism
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
CXX = c++

SRCS = main.cpp AMateria.cpp Character.cpp \
		Cure.cpp Ice.cpp MateriaSource.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re