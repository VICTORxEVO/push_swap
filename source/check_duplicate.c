#include "../includes/push_swap.h"

void    check_duplicate(t_stack **head)
{
    int     doubtful;
    t_stack *tmp;

    while(head[0])
    {
        tmp = head[0]->next;
        doubtful = head[0]->num;
        while(tmp)
        {
            if (doubtful == tmp->num)
                clear_stack(head, 'a', 'E');
            tmp = tmp->next;
        }
        head[0] = head[0]->next;
    }
}
