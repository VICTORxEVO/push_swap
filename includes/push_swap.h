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
    int *num;
    unsigned int cost;
    unsigned int index;
    bool is_at_bottom;
    t_stack *target;
    t_stack *next;
}               t_stack;








// external functions
ssize_t	ft_atoi(const char *str);
bool	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int content, int index);
int	ft_lstsize(t_stack *lst);
char	**ft_split(const char *s, char c);

// check functions
void    check_arg(int ac, char *av[]);
void    check_duplicate(t_stack **head);
int     check_overflow(char num, t_stack **head, char **arr);
bool    check_if_sorted(t_stack *a);

// clear functions
void    clear_arr(char **arr);
void    clear_stack(t_stack **head, int index, char flag);

// loading functions
void    load_check_num(int ac, char *av[], t_stack **head);
void    load_stack(t_stack *a, t_stack *b, t_stack **head);
void    main_sort(t_stack **head);

// sorting algo
void    sort_3(t_stack **head);
void    sort_4(t_stack **head);
void    sort_5(t_stack **head);







#endif