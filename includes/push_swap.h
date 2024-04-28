#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*include other headers*/
# include "ft_printf.h"
# include <stdbool.h>

/*some colors and values*/
# define END "\033[0m"
# define RED "\033[31m"
# define YELLOW "\033[33m"
# define INT_MAX 2147483647
# define INT_MIN -2147483648

/*needed structs*/

typedef struct s_stack
{
    int         num;
    unsigned int cost;
    unsigned int index;
    bool is_upper_mid;
    struct s_stack *target;
    struct s_stack *next;
}               t_stack;








// external functions
int     ft_atoi(const char *str, t_stack **head, char **arr);
bool	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content);
unsigned int     ft_lstsize(t_stack *lst);
char	**ft_split(const char *s, char c);
void	ft_putstr_err(char *s);
int     ft_isdigit(int x);
void    ft_swap(int *a, int *b);

// check functions
void    check_arg(int ac, char *av[]);
void    check_duplicate(t_stack **head);
bool    check_if_sorted(t_stack *a);

// clear functions
void    clear_arr(char **arr);
void    clear_stack(t_stack **head, char flag);

// loading functions
void    load_check_num(int ac, char *av[], t_stack **head);
t_stack **load_stack(t_stack **a, t_stack **b);
void    main_sort(t_stack **head);

// sorting algo
void    sort_3(t_stack **head);
void    sort_4(t_stack **head);
void    sort_5(t_stack **head);
void    sort_infinite(t_stack **head, unsigned int size);

// instructions functions
t_stack *give_max(char stack, t_stack **head);
t_stack *give_min(char stack, t_stack **head);
void    swap(char stack, t_stack **head);
void    push_to(char stack, t_stack **head);
void        rotate(char stack, t_stack **head);
void    update_stack_indexing(t_stack **head);
void    rev_rotate(char stack, t_stack **head);

// algo functions
void    target_comfirmed(t_stack **to_set, t_stack **doubtful_target, int *nearest_number);
void    set_a_targets(t_stack **head);
void    set_b_targets(t_stack **head);
void    calculate_cost(t_stack *node, unsigned int size_a, unsigned int size_b);
t_stack *extract_cheapest(t_stack *node);
void    move_targets_up(t_stack **head, t_stack *target_a, t_stack *target_b);









#endif