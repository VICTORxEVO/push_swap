#include "../../includes/push_swap.h"

void    sort_3(t_stack **head)
{
    t_stack *max_node;

    max_node = give_max('a', head);
    if (max_node->index == 0)
        rotate('a', head);
    else if (max_node->index == 1)
        rev_rotate('a', head);
    if (head[0]->num > head[0]->next->num)
        swap('a', head);
}