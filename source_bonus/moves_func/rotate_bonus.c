#include "../../includes/push_swap_bonus.h"

static void rotate_part2(t_stack **head, int i)
{
    t_stack *last_first_node;

    last_first_node = ft_lstlast(head[i]);
    last_first_node->next = head[i];
    head[i] = head[i]->next;
    last_first_node = last_first_node->next;
    last_first_node->next = NULL;
}

void        rotate(char stack, t_stack **head)
{

    if (stack == 'a' && head[0] && head[0]->next)
        rotate_part2(head, 0);
    else if (stack == 'b' && head[1] && head[1]->next)
        rotate_part2(head, 1);
    else if (stack == 'A')
    {
        if (head[0] && head[0]->next)
            rotate_part2(head, 0);
        if (head[1] && head[1]->next)
            rotate_part2(head, 1);
    }
}
