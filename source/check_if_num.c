#include "../includes/push_swap.h"

void    check_if_num(int ac, char *av[])
{
    int i;
    int j;

    i = -1;
    j = -1;
    while (++i < ac)
    {
        while (av[i][++j])
        {
            if (!((av[i][j] >= '0' && av[i][j] <= '9') && (av[i][j] == ' ' || av[i][j] == '\t')))
            {
                ft_printf("push_swap: %sunexpected charachter found \'%c\'%s", RED, av[i][j], END);
                exit(EXIT_FAILURE);
            }
        }
    }
}