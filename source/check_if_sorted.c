#include "../includes/push_swap.h"

bool    check_if_sorted(t_stack *a)
{
    t_stack *next_num;

    next_num = a->next;
    while(a && next_num)
    {
        if (a->num > next_num->num)
            return false;
    }
    return true;
}