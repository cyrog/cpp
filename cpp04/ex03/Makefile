<<<<<<< HEAD
NAME 		= materia
SRCS 		= main.cpp AMateria.cpp Character.cpp \
			  Cure.cpp Ice.cpp MateriaSource.cpp
OBJS 		= ${SRCS:.cpp=.o}
CCXX		= @c++
RM			= @rm -rf
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
=======
NAME 		= abstract
SRCS 		= $(wildcard *.cpp) 
OBJS 		= $(SRCS:.cpp=.o)
CCXX		= @c++
RM		= @rm -rf
CXXFLAGS	= -Wall -Wextra -Werror -std=c++11
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897

.cpp.o :
	$(CCXX) -c $(CXXFLAGS) -o $@ $<

all: $(NAME)

$(NAME):	$(OBJS)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

clean:
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	$(RM) $(NAME)
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re: fclean all

.PHONY: all clean fclean re
