#include "../includes/push_swap.h"

void    check_overflow(char num, t_stack **head, char **arr)
{
    int num;

    num = ft_atoi(num);
    if (num > INT_MAX || num < INT_MIN)
    {
        free_arr(arr);
        clear_stack(head, 'Y', 0);
    }
}