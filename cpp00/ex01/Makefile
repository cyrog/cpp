NAME = phonebook

SRCS = Contact.cpp Main.cpp Phonebook.cpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -f

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____exec was created____"

clean:
		${RM} ${NAME}
		@echo "____exec was deleted____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re
