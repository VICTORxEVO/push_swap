#include "../includes/push_swap.h"

void verify_overflow(char *str, t_stack *a, char **ptr)
{
    long num;

    num = ft_atoi(str);
    if (num > INT_MAX || num < INT_MIN)
    {
        clear_buff(ptr);
        clear_stack(a, 'Y');
    }
}