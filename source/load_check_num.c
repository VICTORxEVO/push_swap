#include "../includes/push_swap.h"

void load_check_num(int ac, char *av[], t_stack **head)
{
    char **split_ptr;
    int i;
    int num;
    bool res;
    int j;

    i = -1;
    while(++i < ac)
    {
        split_ptr = ft_split(av[i], ' ');
        if (!split_ptr)
            clear_stack(head, 'a', 'E');
        j = -1;
        while(split_ptr[++j])
        {
            num = ft_atoi(split_ptr[j], head, split_ptr);
            res = ft_lstadd_back(head, ft_lstnew(num));
            if (!res)
                (clear_arr(split_ptr), clear_stack(head, 'a', 'E'));
        }
        clear_arr(split_ptr);
    }
    check_duplicate(head);
}
