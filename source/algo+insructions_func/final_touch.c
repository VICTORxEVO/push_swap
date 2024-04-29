#include "../../includes/push_swap.h"

void    final_touch(t_stack **head, t_stack *min_node)
{
    if (min_node->is_upper_mid)
    {
        while (head[0] != min_node)
            rotate('a', head);
    }
    else
    {
        while (head[0] != min_node)
            rev_rotate('a', head);
    }
}