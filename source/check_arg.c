#include "../includes/push_swap.h"

void    check_arg(int ac, char *av[])
{
    if(ac < 2)
        ft_printf("push_swap: %stoo few argument, insert the numbers!!%s", RED, END);
    check_if_num(ac, av);
}