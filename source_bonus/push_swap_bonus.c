#include "../includes/push_swap_bonus.h"

static void other_input(char *line, t_stack **head)
{
    if (ft_strcmp(line, "ra/n") || ft_strcmp(line, "ra"))
        rotate('a', head);
    else if (ft_strcmp(line, "rb/n") || ft_strcmp(line, "rb"))
        rotate('b', head);
    else if (ft_strcmp(line, "rr/n") || ft_strcmp(line, "rr"))
        rotate('A', head);
    else if (ft_strcmp(line, "rra/n") || ft_strcmp(line, "rra"))
        rev_rotate('a', head);
    else if (ft_strcmp(line, "rrb/n") || ft_strcmp(line, "rrb"))
        rev_rotate('b', head);
    else if (ft_strcmp(line, "rrr/n") || ft_strcmp(line, "rrr"))
        rev_rotate('A', head);
    else
        (ft_putstr_err("Error\n"), clear_stack(head, 'E')); 
}

static void main_exec_input(t_stack **head)
{
    char *line;

    line = get_next_line(0);
    while(line)
    {
        if (ft_strcmp(line, "pb/n") || ft_strcmp(line, "pb"))
            push_to('b', head);
        else if (ft_strcmp(line, "pa/n") || ft_strcmp(line, "pa"))
            push_to('a', head);
        else if (ft_strcmp(line, "sa/n") || ft_strcmp(line, "sa"))
            swap('a', head);
        else if (ft_strcmp(line, "sb/n") || ft_strcmp(line, "sb"))
            swap('b', head);
        else if (ft_strcmp(line, "ss/n") || ft_strcmp(line, "ss"))
            swap('A', head);
        else
            other_input(line, head);
    }
}

int main (int ac, char *av[])
{
    t_stack *a;
    t_stack *b;
    t_stack **head;

    check_arg(ac - 1, av + 1);
    head = load_stack(&a, &b);
    load_check_num(ac - 1, av + 1, head);
    main_exec_input(head);
    if (is_sorted(head[0]) && !head[1])
        ft_putstr_err("OK\n");
    else
        ft_putstr_err("KO\n");
    clear_stack(head, 'S');
    return (512);
}