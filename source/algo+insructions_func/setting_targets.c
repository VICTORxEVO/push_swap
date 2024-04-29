#include "../../includes/push_swap.h"

static void set_targets_null(t_stack *node)
{
    while (node)
    {
        node->target = ((void *)0);
        node = node->next;
    }
}

static void    target_comfirmed(t_stack **to_set, t_stack **doubtful_target, int *nearest_number)
{
        (*to_set)->target = *doubtful_target;
        *nearest_number = (*doubtful_target)->num;
}

void    set_a_targets(t_stack **head)
{
    t_stack *to_set;
    t_stack *doubtful_target;
    int nearest_bellow;

    to_set = head[0];
    doubtful_target = head[1];
    nearest_bellow = INT_MIN;
    set_targets_null(head[0]);
    while(to_set)
    {
        while(doubtful_target)
        {
            if (doubtful_target->num > nearest_bellow && doubtful_target->num < to_set->num)
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

void    set_b_targets(t_stack **head)
{
    t_stack *to_set;
    t_stack *doubtful_target;
    int nearest_up;

    to_set = head[1];
    doubtful_target = head[0];
    nearest_up = INT_MAX;
    set_targets_null(head[1]);
    while(to_set)
    {
        while(doubtful_target)
        {
            if (doubtful_target->num < nearest_up && doubtful_target->num > to_set->num)
                target_comfirmed(&to_set, &doubtful_target, &nearest_up);
            doubtful_target = doubtful_target->next;
        }
        if (!to_set->target)
            to_set->target = give_min('a', head);
        to_set = to_set->next;
        doubtful_target = head[0];
        nearest_up = INT_MIN;
    }
}
