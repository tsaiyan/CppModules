# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m
 
OBJTS =  *.cpp
HEADERS = *.hpp
NAME = ex00

RM = rm -f

CC = c++ -std=c++98 -pedantic -Wall -Wextra -Werror

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
