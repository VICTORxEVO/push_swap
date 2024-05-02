#include "../../includes/push_swap_bonus.h"

void    check_duplicate(t_stack **head)
{
    int     doubtful;
    t_stack *tmp;
    t_stack *tmp_head;

    tmp_head = *head;
    while(tmp_head)
    {
        tmp = tmp_head->next;
        doubtful = tmp_head->num;
        while(tmp)
        {
            if (doubtful == tmp->num)
                clear_stack(head, 'E');
            tmp = tmp->next;
        }
        tmp_head = tmp_head->next;
    }
}
