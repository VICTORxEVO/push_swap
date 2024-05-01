#include "../../includes/push_swap.h"

void    push_to(char stack, t_stack **head)
{
    t_stack *next_node;

    if (stack == 'b' && head[0])
    {
        next_node = head[1];
        head[1] = head[0];
        head[0] = head[0]->next;
        head[1]->next = NULL;
        if (head[1])
            head[1]->next = next_node;
        write(1, "pb\n", 3);
    }
    else if (stack == 'a' && head[1])
    {
        next_node = head[0];
        head[0] = head[1];
        head[1] = head[1]->next;
        head[0]->next = NULL;
        if (head[0])
            head[0]->next = next_node;
        write(1, "pa\n", 3);
    }
    update_stack_indexing(head);
}
