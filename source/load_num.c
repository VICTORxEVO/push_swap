#include "../includes/push_swap.h"

void load_num(int ac, char *av[], t_stack *a)
{
    char **ptr;
    int i;
    int j;

    a = NULL;
    i = -1;
    while(++i < ac)
        ptr[i] = ft_split(av[i], ' ');
    ptr[i] = NULL;
    i = -1;
    while(++i < ac)
    {
        while(ptr[i][++j])
            ft_lstadd_front(&a, ft_lstnew(verify_overflow(ptr[i])));
    }
        
}