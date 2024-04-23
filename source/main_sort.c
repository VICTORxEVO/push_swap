#include "../includes/push_swap.h"

void    main_sort(t_stack **head)
{
    unsigned int    size;

    size = ft_lstsize(head[0]);
    if (size == 1)
        return ;
    else if (size == 2)
        swap(head, 'a');
    else if (size == 3)
        sort_3(head);
    else if (size == 4)
        sort_4(head);
    else if (size == 5)
        sort_5(head);
    else
        sort_infinite(head, size);
}