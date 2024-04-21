#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*include other headers*/
# include "ft_printf.h"
# include <stdbool.h>


/*some colors and values*/
# define END "\033[0m"
# define RED "\033[31m"
# define YELLOW "\033[33m"





/*needed structs*/

typedef struct s_stack
{
    int *data;
    unsigned int cost;
    unsigned int index;
    bool is_at_bottom;
    t_stack *target;
    t_stack *next;
}               t_stack;



















#endif