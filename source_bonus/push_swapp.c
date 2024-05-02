#include "../includes/push_swap_bonus.h"

static void other_input(char *line, t_stack **head)
{
    if (ft_strncmp(line, 'ra', 2))
        rotate('a', head);
    else if (ft_strncmp(line, 'rb', 2))
        rotate('b', head);
    else if (ft_strncmp(line, 'rr', 2))
        rotate('A', head);
    else if (ft_strncmp(line, 'rra', 3))
        reverse_rotate('a', head);
    else if (ft_strncmp(line, 'rrb', 3))
        reverse_rotate('b', head);
    else if (ft_strncmp(line, 'rrr', 3))
        reverse_rotate('A', head);
    else
    {
        ft_putstr_err("Error\n");
        clear_stack(head, 'E');
    }
}

static void main_exec_input(t_stack **head)
{
    char *line;

    line = get_next_line(0);
    while(line)
    {
        if (ft_strncmp(line, 'pb', 2))
            push_to('b', head);
        else if (ft_strncmp(line, 'pa', 2))
            push_to('a', head);
        else if (ft_strncmp(line, 'sa', 2))
            swap('a', head);
        else if (ft_strncmp(line, 'sb', 2))
            swap('b', head);
        else if (ft_strncmp(line, 'ss', 2))
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