#include "../includes/push_swap.h"

void    clear_stack(t_stack **head, char stack, char flag)
{
    if(stack == 'a')
        ft_lstclear(&head[0]);
    else if (stack == 'b')
        ft_lstclear(&head[1]);
    else
        (ft_lstclear(&head[0]), ft_lstclear(&head[1]));
    if (flag == 'E')
    {
        write(2, "Error\n", 6);
        exit(EXIT_FAILURE);
    }
    else
        exit(EXIT_SUCCESS);
}