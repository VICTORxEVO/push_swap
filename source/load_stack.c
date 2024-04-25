#include "../includes/push_swap.h"

t_stack    **load_stack(t_stack **a, t_stack **b)
{
    t_stack **ptr;

    *a = NULL;
    *b = NULL;
    ptr = malloc(sizeof(t_stack*) * 2);
    if (!ptr)
        (ft_putstr_err("Error/n"), exit(EXIT_FAILURE));
    ptr[0] = *a;
    ptr[1] = *b;
    return (ptr);
}