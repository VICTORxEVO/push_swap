#include "../../includes/push_swap.h"

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
