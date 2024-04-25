#include "../includes/push_swap.h"

void    clear_stack(t_stack **head, char flag)
{
        (ft_lstclear(head), ft_lstclear(head + 1), free(head));
    if (flag == 'E')
    {
        write(2, "Error\n", 6);
        exit(EXIT_FAILURE);
    }
    else
        exit(EXIT_SUCCESS);
}