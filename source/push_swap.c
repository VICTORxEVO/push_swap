#include "../includes/push_swap.h"

int main (int ac, char *av[])
{
    t_stack a;
    t_stack b;
    t_stack **head;

    check_arg(ac, av);
    load_stack(&a, &b, head);
    load_check_num(ac, av, head);
    if(!is_sorted(head[0]))
        main_sort(head);
    clear_stack(head, 'S', 2);
}
