#include "../../includes/push_swap.h"

void    move_targets_up_part2(t_stack **head, t_stack *target_a, t_stack *target_b)
{
    if (target_a->is_upper_mid && !target_b->is_upper_mid)
    {
        while (head[0] != target_a)
            rotate('a', head);
        while (head[1] != target_b)
            rev_rotate('b', head);
    }
    else if (!target_a->is_upper_mid && target_b->is_upper_mid)
    {
        while (head[0] != target_a)
            rev_rotate('a', head);
        while (head[1] != target_b)
            rotate('b', head);
    }
}

void    move_targets_up(t_stack **head, t_stack *target_a, t_stack *target_b)
{
    if (target_a->is_upper_mid && target_b->is_upper_mid)
    {
        while (head[0] != target_a || head[1] != target_b)
            rotate('A', head);
        while (head[0] != target_a)
            rotate('a', head);
        while (head[1] != target_b)
            rotate('b', head);
    }
    else if (!target_a->is_upper_mid && !target_b->is_upper_mid)
    {
        while (head[0] != target_a || head[1] != target_b)
            rev_rotate('A', head);
        while (head[0] != target_a)
            rev_rotate('a', head);
        while (head[1] != target_b)
            rev_rotate('b', head);
    }
    else
        move_targets_up_part2(head, target_a, target_b);
}
