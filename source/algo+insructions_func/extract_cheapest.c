#include "../../includes/push_swap.h"

t_stack *extract_cheapest(t_stack *node)
{
    t_stack *cheapest;

    cheapest = node;
    while (node)
    {
        if (!cheapest->cost)
            break;
        if (node->cost < cheapest->cost)
            cheapest = node;
        node = node->next;
    }
    return (cheapest);
}