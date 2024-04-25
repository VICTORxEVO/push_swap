#include "../../includes/push_swap.h"

static void    swap_part2(t_stack **head, int i)
{
    t_stack *node0;
    t_stack *node1;

    node0 = head[i];
    node1 = head[i]->next;
    node0->next = node1->next;
    node1->next = node0;
    head[i] = node1;
}

void    swap(char stack, t_stack **head)
{
    if (stack == 'a')
        swap_part2(head, 0);
    else if (stack == 'b')
        swap_part2(head, 1);
    else 
    {
        swap_part2(head, 0);
        swap_part2(head, 1);
    }
}
