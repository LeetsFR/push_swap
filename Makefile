NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -O3 
SRC_FILES = main.c create_stack_a.c ft_reverse.c ft_swap.c ft_push.c ft_rotate.c push_swap_split.c push_swap_utils.c push_swap_utils_2.c ft_rules_utils.c ft_next_push.c ft_cost.c ft_pos_index.c push_in_a.c
SRC_FILES_BONUS = checker.c get_next_line_bonus.c get_next_line_utils.c
OBJ_FILES = $(SRC_FILES:.c=.o) 
OBJ_FILES_BONUS = $(SRC_FILES_BONUS:.c=.o) 

all: $(NAME)
	
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.c main.h checker.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_FILES_BONUS)
	$(CC) $(CFLAGS) $(OBJ_FILES_BONUS) -o $(NAME_BONUS)

clean:
	rm -f $(OBJ_FILES) $(OBJ_FILES_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus

