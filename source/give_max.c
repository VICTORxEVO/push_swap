#include "../includes/push_swap.h"

int give_max(t_stack **head, char stack)
{
    int max;
    t_stack *tmp;

    if (stack == 'a')
        tmp = head[0];
    else
        tmp = head[1];
    max = tmp->num;
    tmp = tmp->next;
    while(tmp)
    {
        if(tmp->num > max)
            max = tmp->num;
        tmp = tmp->next;
    }
    return (max);
}
