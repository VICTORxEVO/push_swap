#include "../../includes/push_swap.h"

t_stack *give_min(char stack, t_stack **head)
{
    t_stack *tmp;
    t_stack *min;

    if (stack == 'a')
        tmp = head[0];
    else
        tmp = head[1];
    min = head[0];
    while ((tmp = tmp->next))
    {
        if (tmp->num < min->num)
            min = tmp;
    }
    return (min);
}