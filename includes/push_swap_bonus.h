/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:36:47 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/02 12:00:03 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

/*include other headers*/
# include "ft_printf.h"
# include <stdbool.h>
# include <limits.h>
# include "get_next_line.h"

/*some colors and values*/
# define END "\033[0m"
# define RED "\033[31m"
# define YELLOW "\033[33m"

/*needed structs*/

typedef struct s_stack
{
    int         num;
    size_t cost;
    size_t index;
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
size_t  ft_lstsize(t_stack *lst);
char	**ft_split(const char *s, char c);
void	ft_putstr_err(char *s);
int     ft_isdigit(int x);
void    ft_swap(int *a, int *b);
int     ft_strncmp(const char *s1, const char *s2, unsigned int n);

// check functions
void    check_arg(int ac, char *av[]);
void    check_duplicate(t_stack **head);
bool    is_sorted(t_stack *a);

// clear functions
void    clear_arr(char **arr);
void    clear_stack(t_stack **head, char flag);

// loading functions
void    load_check_num(int ac, char *av[], t_stack **head);
t_stack **load_stack(t_stack **a, t_stack **b);

// instructions functions
void        swap(char stack, t_stack **head);
void        push_to(char stack, t_stack **head);
void        rotate(char stack, t_stack **head);
void        update_stack_indexing(t_stack **head);
void        rev_rotate(char stack, t_stack **head);

#endif