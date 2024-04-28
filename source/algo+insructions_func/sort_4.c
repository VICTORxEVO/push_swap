#include "../../includes/push_swap.h"

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
