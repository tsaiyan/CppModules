# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
 
OBJTS =  main.cpp Animal.cpp Brain.cpp
HEADERS = Animal.hpp Brain.hpp
NAME = AbstractClass

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
