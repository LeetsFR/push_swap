NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -O3
SRC_FILES = main.c create_stack_a.c ft_reverse.c ft_swap.c ft_push.c ft_rotate.c push_swap_split.c push_swap_utils.c push_swap_utils_2.c ft_rules_utils.c ft_next_push.c ft_cost.c
OBJ_FILES = $(SRC_FILES:.c=.o) 

all: $(NAME)
	
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.c main.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

