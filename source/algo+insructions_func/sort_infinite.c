#include "../../includes/push_swap.h"

static void sort_b(t_stack **head, t_stack *max_node, t_stack *min_node)
{
    if (max_node->is_upper_mid)
        max_node->cost = max_node->index;
    else if (!max_node->is_upper_mid)
        max_node->cost = ft_lstsize(head[1]) - max_node->index;
    if (min_node->is_upper_mid)
        min_node->cost = min_node->index;
    else if (!min_node->is_upper_mid)
        min_node->cost = ft_lstsize(head[1]) - min_node->index;
    if (max_node->cost < min_node->cost)
    {
        if (max_node->is_upper_mid)
        {
            while (head[1] != max_node)
                rotate('b', head);
        }
        else
        {
            while (head[1] != max_node)
                rev_rotate('b', head);
        }
    }
    else
    {
        if (min_node->is_upper_mid)
        {
            while (min_node->next)
                rotate('b', head);
        }
        else
        {
            while (min_node->next)
                rev_rotate('b', head);
        }
    }
}

static void sort_infinite_r(t_stack **head)
{
    t_stack *cheapest;

    set_b_targets(head);
    calculate_cost(head[1], ft_lstsize(head[1]), ft_lstsize(head[0]));
    cheapest = extract_cheapest(head[1]);
    move_targets_up(head, cheapest->target, cheapest);
    push_to('a', head);
}


void    sort_infinite(t_stack **head, unsigned int size)
{
    t_stack *cheapest;

    push_to('b', head);
    push_to('b', head);
    if (check_if_sorted(head[1]))
        swap('b', head);
    while (size-- > 3)
    {
        set_a_targets(head);
        calculate_cost(head[0], ft_lstsize(head[0]), ft_lstsize(head[1]));
        cheapest = extract_cheapest(head[0]);
        move_targets_up(head, cheapest, cheapest->target);
        push_to('b', head);
    }
    if (!check_if_sorted(head[0]))
        sort_3(head);
    sort_b(head, give_max('b', head), give_min('a', head));
    while (head[1])
        sort_infinite_r(head);
    if (!check_if_sorted(head[0]))
        final_touch(head, give_min('a', head));
}
