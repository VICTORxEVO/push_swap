#include "../includes/push_swap.h"

static void    check_if_num(int ac, char *av[])
{
    int i;
    int j;

    i = -1;
    while (++i < ac)
    {
        j = -1;
        while (av[i][++j])
        {
            if (!ft_isdigit(av[i][j]) && !(av[i][j] == ' ' || av[i][j] == '+' || av[i][j] == '-'))
                (ft_putstr_err("Error not num\n"), exit(EXIT_FAILURE));
        }
    }
}

void    check_arg(int ac, char *av[])
{
    if(ac < 1)
        (ft_putstr_err("Error args\n"), exit(EXIT_FAILURE));
    check_if_num(ac, av);
}
