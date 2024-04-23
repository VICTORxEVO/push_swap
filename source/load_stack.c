#include "../includes/push_swap.h"

void    load_stack(t_stack *a, t_stack *b, t_stack **head)
{
    head[0] = &a;
    head[1] = &b;
    a = NULL;
    b = NULL;
}