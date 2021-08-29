# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

OBJTS =  main.cpp ClapTrap.cpp ScavTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp
NAME = ScavTrap

RM = rm -f

CC = clang++ -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all: $(NAME)

$(NAME): $(OBJTS) $(HEADERS)
	@$(CC) $(OBJTS) -o $(NAME)
	@echo " $(RED)$(NAME)$(GREEN) comliled.$(RESET)"
clean:
	@$ rm -rf $(NAME)
	@echo "$(RED) $(NAME) deleted.$(RESET)"
fclean: clean
re: fclean all
