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
    if (stack == 'a' && head[0] && head[0]->next)
    {
        swap_part2(head, 0);
        write(1, "sa\n", 3);
    }
    else if (stack == 'b' && head[1] && head[1]->next)
    {
        swap_part2(head, 1);
        write(1, "sb\n", 3);
    }
    else
    {
        if (head[0] && head[0]->next)
            swap_part2(head, 0);
        if (head[1] && head[1]->next)
            swap_part2(head, 1);
        if ((head[0] && head[0]->next) || (head[1] && head[1]->next))
            write(1, "ss\n", 1);
    }
    update_stack_indexing(head);
}
