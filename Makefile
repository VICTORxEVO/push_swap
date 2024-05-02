NAME= push_swap
B_NAME= checker


CCF= cc -Wall -Wextra -Werror


S= source
S_ALG= $(S)/algo_func
S_CLF= $(S)/check_clear_func
S_EXT= $(S)/external_func
S_MV= $(S)/moves_func


SB= source_bonus
SB_ALG= $(SB)/algo_func
SB_CLF= $(SB)/check_clear_func
SB_EXT= $(SB)/external_func
SB_MV= $(SB)/moves_func


SRC= $(S)/push_swap.c \
	 $(S_ALG)/extract_values.c $(S_ALG)/final_touch.c $(S_ALG)/find_cheapest.c $(S_ALG)/moving_targets.c $(S_ALG)/setting_targets.c $(S_ALG)/sort_3to5.c $(S_ALG)/sort_infinite.c $(S_ALG)/stack_index.c \
	 $(S_CLF)/check_arg.c $(S_CLF)/check_duplicate.c $(S_CLF)/check_if_sorted.c $(S_CLF)/check_loading_stack.c $(S_CLF)/clear_arr.c $(S_CLF)/clear_stack.c \
	 $(S_EXT)/ft_atoi.c $(S_EXT)/ft_isdigit.c $(S_EXT)/ft_lstadd_back.c $(S_EXT)/ft_lstadd_front.c $(S_EXT)/ft_lstclear.c $(S_EXT)/ft_lstdelone.c $(S_EXT)/ft_lstlast.c $(S_EXT)/ft_lstnew.c $(S_EXT)/ft_lstsize.c $(S_EXT)/ft_putstr_err.c $(S_EXT)/ft_split.c $(S_EXT)/ft_swap.c \
	 $(S_MV)/push.c $(S_MV)/rev_rotate.c $(S_MV)/rotate.c $(S_MV)/swap.c


B_SRC = $(SB)/push_swap_bonus.c \
	 	$(SB_CLF)/check_arg_bonus.c $(SB_CLF)/check_duplicate_bonus.c $(SB_CLF)/check_if_sorted_bonus.c $(SB_CLF)/check_loading_stack_bonus.c $(SB_CLF)/clear_arr_bonus.c $(SB_CLF)/clear_stack_bonus.c \
	 	$(SB_EXT)/ft_atoi_bonus.c $(SB_EXT)/ft_isdigit_bonus.c $(SB_EXT)/ft_lstadd_back_bonus.c $(SB_EXT)/ft_lstadd_front_bonus.c $(SB_EXT)/ft_lstclear_bonus.c $(SB_EXT)/ft_lstdelone_bonus.c $(SB_EXT)/ft_lstlast_bonus.c $(SB_EXT)/ft_lstnew_bonus.c $(SB_EXT)/ft_lstsize_bonus.c $(SB_EXT)/ft_putstr_err_bonus.c $(SB_EXT)/ft_split_bonus.c $(SB_EXT)/ft_swap_bonus.c $(SB_EXT)/strcmp_bonus.c $(SB_EXT)/get_next_line_bonus.c $(SB_EXT)/get_next_line_utils_bonus.c \
	 	$(SB_MV)/push_bonus.c $(SB_MV)/rev_rotate_bonus.c $(SB_MV)/rotate_bonus.c $(SB_MV)/swap_bonus.c


B_OBJ = $(B_SRC:.c=.o)


OBJ = $(SRC:.c=.o)


all: $(NAME)


bonus: $(B_NAME)


$(NAME): $(OBJ)
		@$(CCF) $^ -o $@
		@echo "compiling"
		@sleep 0.5
		@echo "push_swap is ready"


$(B_NAME): $(B_OBJ)
		@$(CCF) $^ -o $@
		@echo "compiling"
		@sleep 0.5
		@echo "checker is ready"


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

.PHONY: all clean fclean re bonus clear