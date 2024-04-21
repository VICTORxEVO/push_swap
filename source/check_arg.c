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
                perror("Error\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}

void    check_arg(int ac, char *av[])
{
    if(ac < 2)
    {
        perror("Error\n");
        exit(EXIT_FAILURE);
    }
    check_if_num(ac, av);
}
