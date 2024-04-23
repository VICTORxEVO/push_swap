#include "../includes/push_swap.h"

void    check_duplicate(t_stack **head)
{
    int doubtful;
    t_stack *tmp;

    while(head[0])
    {
        tmp = head[0]->next;
        doubtful = head[0]->num;
        while(tmp)
        {
            if (doubtful == tmp->num)
                (perror("Error\n"), clear_stack(head, 0, 'E'));
        }
    }
}
