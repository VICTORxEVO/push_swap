#include "../../includes/push_swap_bonus.h"

void    clear_stack(t_stack **head, char flag)
{
        (ft_lstclear(head), ft_lstclear(head + 1), free(head));
    if (flag == 'E')
    {
        ft_putstr_err("Error\n");
        exit(EXIT_FAILURE);
    }
    else
        exit(EXIT_SUCCESS);
}