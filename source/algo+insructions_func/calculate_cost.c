#include "../../includes/push_swap.h"

static unsigned int max(unsigned int a, unsigned int b)
{
    if (a >= b)
        return (a);
    return (b);
}

void    calculate_cost(t_stack *node, unsigned int size_node, unsigned int size_target)
{
    while (node)
    {
        if (node->is_upper_mid && node->target->is_upper_mid)
            node->cost = max(node->index, node->target->index);
        else if (!node->is_upper_mid && !node->target->is_upper_mid)
            node->cost = max(size_node - node->index, size_target - node->target->index);
        else if (!node->is_upper_mid && node->target->is_upper_mid)
            node->cost = max(size_node - node->index, node->target->index);
        else if (node->is_upper_mid && !node->target->is_upper_mid)
            node->cost = max(node->index, size_target - node->target->index);
        node = node->next;
    }
}
