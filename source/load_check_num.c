#include "../includes/push_swap.h"

void load_check_num(int ac, char *av[], t_stack **head)
{
    char **ptr;
    int i;
    int j;
    int index;
    bool res;

    index = 0;
    i = -1;
    while(++i < ac)
        ptr[i] = ft_split(av[i], ' ');
    ptr[i] = NULL;
    i = -1;
    while(++i < ac)
    {
        j = -1;
        while(ptr[i][++j])
        {
            res = ft_lstadd_back(&head[0], ft_lstnew(check_overflow(ptr[i][j], &head[0], ptr)), index++);
            if (!res)
                (clear_buff(ptr), clear_stack(head[0], 'E', 0));
        }
    }
    (clear_buff(ptr), check_duplicate(head));
}
