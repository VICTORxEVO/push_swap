#include "../../includes/push_swap.h"

t_stack    **load_stack(t_stack **a, t_stack **b)
{
    t_stack **ptr;

    *a = NULL;
    *b = NULL;
    ptr = malloc(sizeof(t_stack*) * 3);
    if (!ptr)
        (ft_putstr_err("Error/n"), exit(EXIT_FAILURE));
    ptr[0] = *a;
    ptr[1] = *b;
    ptr[2] = NULL;
    return (ptr);
}

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
            clear_stack(head, 'E');
        j = -1;
        while(split_ptr[++j])
        {
            num = ft_atoi(split_ptr[j], head, split_ptr);
            res = ft_lstadd_back(head, ft_lstnew(num));
            if (!res)
                (clear_arr(split_ptr), clear_stack(head, 'E'));
        }
        clear_arr(split_ptr);
    }
    check_duplicate(head);
}