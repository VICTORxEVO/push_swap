#include "../includes/push_swap.h"

t_stack *give_max(char stack, t_stack **head)
{
    t_stack *max;
    t_stack *tmp;

    if (stack == 'a')
        tmp = head[0];
    else
        tmp = head[1];
    max = tmp;
    while((tmp = tmp->next))
    {
        if(tmp->num > max->num)
            max = tmp;
    }
    return (max);
}
