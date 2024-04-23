#include "../includes/push_swap.h"

void load_num(int ac, char *av[], t_stack **head)
{
    char **ptr;
    int i;
    int j;
    int index;

    index = 0;
    i = -1;
    while(++i < ac)
        ptr[i] = ft_split(av[i], ' ');
    ptr[i] = NULL;
    i = -1;
    while(++i < ac)
    {
        while(ptr[i][++j])
            ft_lstadd_back(&head[0], ft_lstnew(check_overflow(ptr[i][j], &head[0], ptr)), index++);
    }
}
