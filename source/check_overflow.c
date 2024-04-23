#include "../includes/push_swap.h"

int    check_overflow(char num, t_stack **head, char **arr)
{
    ssize_t   num;

    num = ft_atoi(num);
    if (num > INT_MAX || num < INT_MIN)
    {
        free_arr(arr);
        clear_stack(head, 0, 'E');
    }
    return ((int)num);
}