#include "../../includes/push_swap.h"

static size_t max(size_t a, size_t b)
{
    if (a > b)
        return (a);
    return (b);
}

t_stack *extract_cheapest(t_stack *node)
{
    t_stack *cheapest;

    cheapest = node;
    while ((node = node->next))
    {
        if (!cheapest->cost)
            break;
        if (node->cost < cheapest->cost)
            cheapest = node;
    }
    return (cheapest);
}

void    calculate_cost(t_stack *node, size_t size_node, size_t size_target)
{
    while (node)
    {
        if (node->is_upper_mid && node->target->is_upper_mid)
            node->cost = max(node->index, node->target->index);
        else if (!node->is_upper_mid && !node->target->is_upper_mid)
            node->cost = max(size_node - node->index, size_target - node->target->index);
        else if (!node->is_upper_mid && node->target->is_upper_mid)
            node->cost = size_node - node->index + node->target->index;
        else
            node->cost = node->index + size_target - node->target->index;
        node = node->next;
    }
}
