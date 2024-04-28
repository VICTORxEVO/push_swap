#include "../../includes/push_swap.h"

void    sort_infinite(t_stack **head, unsigned int size)
{
    t_stack *cheapest;

    push_to('b', head);
    push_to('b', head);
    while (size-- > 5)
    {
        set_a_targets(head);
        calculate_cost(head[0], ft_lstsize(head[0]), ft_lstsize(head[1]));
        cheapest = extract_cheapest(head[0]);
        move_targets_up(head, cheapest, cheapest->target);
        push_to('b', head);
    }
}
