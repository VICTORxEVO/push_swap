#include "../../includes/push_swap.h"

void    push_to(char stack, t_stack **head)
{
    t_stack *next_node;

    if (stack == 'b' && !head[1])
    {
        head[1] = head[0];
        head[0] = head[0]->next;
        head[1]->next = NULL;
    }
    else if (stack == 'b')
    {
        next_node = head[1];
        head[1] = head[0];
        head[0] = head[0]->next;
        head[1]->next = next_node;
    }
    else
    {
        next_node = head[0];
        head[0] = head[1];
        head[1] = head[1]->next;
        head[0]->next = next_node;
    }
}
