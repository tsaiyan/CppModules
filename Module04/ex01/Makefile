# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
 
OBJTS =  main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
HEADERS = Animal.hpp Dog.cpp Cat.hpp Brain.hpp
NAME = ex01

RM = rm -f

CC = clang++ -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all: $(NAME)

$(NAME): $(OBJTS) $(HEADERS)
	@$(CC) $(OBJTS) -o $(NAME)
	@echo "$(RED)$(NAME)$(GREEN) compiled.$(RESET)"
clean:
	@$ rm -rf $(NAME)
	@echo "$(RED) $(NAME) deleted.$(RESET)"
fclean: clean
re: fclean all
