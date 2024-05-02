#include "../../includes/push_swap_bonus.h"

bool    is_sorted(t_stack *a)
{
    while(a && a->next)
    {
        if (a->num > a->next->num)
            return false;
        a = a->next;
    }
    return true;
}