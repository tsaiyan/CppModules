# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

SOURCE = ./sources

OBJTS =  main.cpp

NAME = megaphone

RM = rm -f

CC = clang++ -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all: $(NAME)

$(NAME): $(OBJTS)  $(HEADER)
	@$(CC) $(OBJTS) -o $(NAME)
	@echo "$(GREEN)Comliled.$(RESET)"
clean:
	@$ rm -rf $(NAME)
	@echo "$(RED)$(NAME) deleted.$(RESET)"
fclean: clean
re: fclean all