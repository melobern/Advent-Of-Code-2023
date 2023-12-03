NAME = bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_malloc_functions.c ft_split.c ft_errors.c main.c basic_functions.c print_map.c ft_check.c dict_parsing.c ft_solve.c
OBJS = $(SRCS:.c=.o)
HEADER = lib_functions.h
FONT_RED := $(shell tput setaf 1)
FONT_GREEN := $(shell tput setaf 2)
FONT_YELLOW := $(shell tput setaf 3)
FONT_LIGHT_BLUE := \033[94m
FONT_BOLD := $(shell tput bold)
FONT_ITALIC := $(shell tput sitm)
FONT_RESET := $(shell tput sgr0)

all: print $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) ./objs/*o -o $(NAME)
	@printf "$(FONT_GREEN)Compiled $(NAME) successfully!$(FONT_RESET)\n"

%.o: %.c
	@printf "$(FONT_YELLOW)Compiling $<...$(FONT_RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o ./objs/$@

clean: print
	@printf "$(FONT_LIGHT_BLUE)Cleaning object files...$(FONT_RESET)\n"
	@rm -f ./objs/*o
	@printf "$(FONT_GREEN)Done !$(FONT_RESET)\n"

fclean: clean
	@printf "$(FONT_LIGHT_BLUE)Cleaning $(NAME)...$(FONT_RESET)\n"
	@rm -f $(NAME)
	@printf "$(FONT_GREEN)Done !$(FONT_RESET)\n"

re: fclean all

print:
	@clear
	@printf "\n"
	@printf "$(FONT_RED) ▄▀▀█▄▄   ▄▀▀▀▀▄   ▄▀▀▀▀▄$(FONT_RESET)\n"
	@printf "$(FONT_RED)▐ ▄▀   █ █ █   ▐ █      █$(FONT_RESET)\n"
	@printf "$(FONT_RED)  █▄▄▄▀     ▀▄   █      █$(FONT_RESET)\n"
	@printf "$(FONT_RED)  █   █  ▀▄   █   ▀▄▄▄▄▀▄$(FONT_RESET)\n"
	@printf "$(FONT_RED) ▄▀▄▄▄▀   █▀▀▀           █$(FONT_RESET)\n"
	@printf "$(FONT_RED)█    ▐    ▐$(FONT_BOLD)$(FONT_LIGHT_BLUE)$(FONT_ITALIC) COMPILATOR$(FONT_RESET) $(FONT_RED) ▐$(FONT_RESET)\n"
	@printf "$(FONT_RED)▐$(FONT_RESET)"
	@printf "\n\n"

