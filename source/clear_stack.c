#include "../includes/push_swap.h"

void    clear_stack(t_stack **head, char flag, int index)
{
    if(index == 2)
    {
        ft_lstclear(head[0]);
        ft_lstclear(head[1]);
    }
    else
        ft_lstclear(head[index]);
    if (flag == 'Y')
    {
        exit(EXIT_FAILURE);
        write(2, "Error\n", 6);
    }
    else
        exit(EXIT_SUCCESS);
}