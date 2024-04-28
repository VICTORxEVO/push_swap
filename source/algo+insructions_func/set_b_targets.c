#include "../../includes/push_swap.h"

void    set_b_targets(t_stack **head)
{
    t_stack *to_set;
    t_stack *doubtful_target;
    int nearest_bellow;

    to_set = head[1];
    doubtful_target = head[0];
    nearest_bellow = INT_MAX;
    while(to_set)
    {
        while(doubtful_target)
        {
            if (doubtful_target->num < nearest_bellow && doubtful_target->num > to_set->num)
                target_comfirmed(&to_set, &doubtful_target, &nearest_bellow);
            doubtful_target = doubtful_target->next;
        }
        if (!to_set->target)
            to_set->target = give_max('b', head);
        to_set = to_set->next;
        doubtful_target = head[1];
        nearest_bellow = INT_MIN;
    }
}