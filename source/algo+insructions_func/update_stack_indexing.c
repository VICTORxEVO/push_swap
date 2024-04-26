#include "../../includes/push_swap.h"

void    update_stack_indexing(t_stack **head)
{
    unsigned int i;
    t_stack *node;

    node = *head;
    i = 0;
    while(node)
    {
        node->index = i;
        node = node->next;
        i++;
    }
    if (head[1])
        update_stack_indexing(head + 1);
}