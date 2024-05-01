#include "../../includes/push_swap.h"

void    sort_3(t_stack **head)
{
    t_stack *max_node;

    max_node = give_max('a', head);
    if (max_node->index == 0)
        rotate('a', head);
    else if (max_node->index == 1)
        rev_rotate('a', head);
    if (!is_sorted(head[0]))
        swap('a', head);
}

void    sort_4(t_stack **head)
{
    t_stack *min;

    min = give_min('a', head);
    if (min->is_upper_mid)
    {
        if (head[0] != min)
            swap('a', head);
    }
    else
    {
        while (head[0] != min)
            rev_rotate('a', head);
    }
    push_to('b', head);
    sort_3(head);
    push_to('a', head);
}

void    sort_5(t_stack **head)
{
    t_stack *min;

    min = give_min('a', head);
    if (min == head[0]->next->next)
    {
        rotate('a', head);
        swap('a', head);
    }
    else if (min->is_upper_mid)
    {
        while (min != head[0])
            rotate('a', head);
    }
    else
    {
        while (min != head[0])
            rev_rotate('a', head);
    }
    push_to('b', head);
    sort_4(head);
    push_to('a', head);
}
