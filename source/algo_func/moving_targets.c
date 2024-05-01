#include "../../includes/push_swap.h"

void    move_targets_up_part2(t_stack **head, t_stack *a_node, t_stack *b_node)
{
    if (a_node->is_upper_mid && !b_node->is_upper_mid)
    {
        while (head[0] != a_node)
            rotate('a', head);
        while (head[1] != b_node)
            rev_rotate('b', head);
    }
    else if (!a_node->is_upper_mid && b_node->is_upper_mid)
    {
        while (head[0] != a_node)
            rev_rotate('a', head);
        while (head[1] != b_node)
            rotate('b', head);
    }
}

void    move_targets_up(t_stack **head, t_stack *a_node, t_stack *b_node)
{
    if (a_node->is_upper_mid && b_node->is_upper_mid)
    {
        while (head[0] != a_node && head[1] != b_node)
            rotate('A', head);
        while (head[0] != a_node)
            rotate('a', head);
        while (head[1] != b_node)
            rotate('b', head);
    }
    else if (!a_node->is_upper_mid && !b_node->is_upper_mid)
    {
        while (head[0] != a_node && head[1] != b_node)
            rev_rotate('A', head);
        while (head[0] != a_node)
            rev_rotate('a', head);
        while (head[1] != b_node)
            rev_rotate('b', head);
    }
    else
        move_targets_up_part2(head, a_node, b_node);
}
