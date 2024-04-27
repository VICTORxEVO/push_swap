#include "../../includes/push_swap.h"

static void    set_targets(t_stack **head)
{
    t_stack *to_set;
    t_stack *doubtful_target;
    int nearest_bellow;

    to_set = head[0];
    doubtful_target = head[1];
    nearest_bellow = INT_MIN;
    while(to_set)
    {
        while(doubtful_target)
        {  
            if (doubtful_target->num > nearest_bellow && doubtful_target->num < to_set->num)
            {
                to_set->target = doubtful_target;
                nearest_bellow = doubtful_target->num;
                printf("inside loop and target->num is %d", to_set->target->num);
            }
            doubtful_target = doubtful_target->next;
        }
        to_set = to_set->next;
    }
}




void    sort_infinite(t_stack **head, unsigned int size)
{
    push_to('b', head);
    push_to('b', head);
    set_targets(head);
}