#include "../includes/push_swap.h"

t_stack    **load_stack(t_stack **a, t_stack **b)
{
    t_stack **ptr;

    ptr = malloc(sizeof(t_stack*) * 3);
    if (!ptr)
        (ft_putstr_err("Error/n"), exit(EXIT_FAILURE));
    ptr[2] = NULL;
    *a = NULL;
    *b = NULL;
    ptr[0] = *a;
    ptr[1] = *b;
    return (ptr);
}