#include "../includes/push_swap.h"

int give_max(t_stack **head)
{
    int max;

    max = head[0]->num;
    head[0] = head[0]->next;
    while(head[0])
    {
        if(head[0]->num > max)
            max = head[0]->num;
        head[0] = head[0]->next;
    }
    return (max);
}
