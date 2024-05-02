#include "../../includes/push_swap.h"

void    swap(char stack, t_stack **head)
{
    if (stack == 'a' && head[0] && head[0]->next)
        ft_swap(&head[0]->num, &head[0]->next->num);
    else if (stack == 'b' && head[1] && head[1]->next)
        ft_swap(&head[1]->num, &head[1]->next->num);
    else if (stack == 'A')
    {
        if (head[0] && head[0]->next)
            ft_swap(&head[0]->num, &head[0]->next->num);
        if (head[1] && head[1]->next)
            ft_swap(&head[1]->num, &head[1]->next->num);
    }
}
