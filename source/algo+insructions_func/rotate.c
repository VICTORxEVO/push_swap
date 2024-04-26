#include "../../includes/push_swap.h"

static void rotate_part2(t_stack **head, int i, char flag)
{
    t_stack *last_first_node;

    last_first_node = ft_lstlast(head[i]);
    last_first_node->next = head[i];
    head[i] = head[i]->next;
    last_first_node = last_first_node->next;
    last_first_node->next = NULL;
    if (flag == 'a')
        write(1, "ra\n", 3);
    else if (flag == 'b')
        write(1, "rb\n", 3);
}

void        rotate(char stack, t_stack **head)
{

    if (stack == 'a' && head[0] && head[0]->next)
        rotate_part2(head, 0, stack);
    else if (stack == 'b' && head[1] && head[1]->next)
        rotate_part2(head, 1, stack);
    else
    {
        if (head[0] && head[0]->next)
            rotate_part2(head, 0, 'X');
        if (head[1] && head[1]->next)
            rotate_part2(head, 1, 'X');
        if ((head[1] && head[1]->next) || (head[1] && head[1]->next))
            write(1, "rrr\n", 4);
    }
    update_stack_indexing(head);
}
