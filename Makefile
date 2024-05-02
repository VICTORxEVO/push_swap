NAME= push_swap
B_NAME= checker

CCF= cc -Wall -Wextra -Werror

S= source
S_ALG= $(S)/algo_func
S_CLF= $(S)/check_clear_func
S_EXT= $(S)/external_func
S_MV= $(S)/moves_func

SRC= $(S)/push_swap.c \
	 $(S_ALG)/extract_values.c $(S_ALG)/final_touch.c $(S_ALG)/find_cheapest.c $(S_ALG)/moving_targets.c $(S_ALG)/setting_targets.c $(S_ALG)/sort_3to5.c $(S_ALG)/sort_infinite.c $(S_ALG)/stack_index.c \
	 $(S_CLF)/check_arg.c $(S_CLF)/check_duplicate.c $(S_CLF)/check_if_sorted.c $(S_CLF)/check_loading_stack.c $(S_CLF)/clear_arr.c $(S_CLF)/clear_stack.c \
	 $(S_EXT)/ft_atoi.c $(S_EXT)/ft_isdigit.c $(S_EXT)/ft_lstadd_back.c $(S_EXT)/ft_lstadd_front.c $(S_EXT)/ft_lstclear.c $(S_EXT)/ft_lstdelone.c $(S_EXT)/ft_lstlast.c $(S_EXT)/ft_lstnew.c $(S_EXT)/ft_lstsize.c $(S_EXT)/ft_putstr_err.c $(S_EXT)/ft_split.c $(S_EXT)/ft_swap.c \
	 $(S_MV)/push.c $(S_MV)/rev_rotate.c $(S_MV)/rotate.c $(S_MV)/swap.c

B_SRC = $()

B_OBJ = $(B_SRC:.c=.o)

OBJ = $(SRC:.c=.o)

all: $(NAME)

bonus: $(B_OBJ)
		@$(CCF) $^ -o $(NAME)
		@echo "compiling"
		@sleep 0.5
		@echo "checker is ready"

$(NAME): $(OBJ)
		@$(CCF) $^ -o $(NAME)
		@echo "compiling"
		@sleep 0.5
		@echo "push_swap is ready"

%.o: %.c
		@$(CCF) -c $< -o $@ -g

clean:
		@rm -f $(OBJ) $(B_OBJ)
		@echo "cleaning..."

fclean: clean
		@rm -f $(NAME) $(B_NAME)
		@echo "cleaning program..."

re: fclean all

clear: all bonus clean