NAME= push_swap
B_NAME= checker

CCF= cc -Wall -Wextra -Werror

SRC = $(shell find source -name "*.c")
OBJ = $(SRC:.c=.o)

B_SRC = $(shell find source_bonus -name "*.c")
B_OBJ = $(B_SRC:.c=.o)


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