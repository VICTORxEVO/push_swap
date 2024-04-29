#include "../../includes/push_swap.h"

void    sort_3(t_stack **head)
{
    t_stack *max_node;

    max_node = give_min('a', head);
    if (max_node->index == 0)
        rotate('a', head);
    else if (max_node->index == 1)
        rev_rotate('a', head);
    if (!check_if_sorted(head[0]))
        swap('a', head);
}