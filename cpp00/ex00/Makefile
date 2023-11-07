NAME 		=	megaphone

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $@ $^ && echo "ok"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(NAME) && echo "clean"

fclean: clean
	@rm -f $(NAME)

re: fclean all
