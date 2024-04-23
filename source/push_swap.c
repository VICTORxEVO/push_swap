#include "../includes/push_swap.h"

int main (int ac, char *av[])
{
    t_stack a;
    t_stack b;
    t_stack **head;

    check_arg(ac, av);
    load_stack(&a, &b, head);
    load_check_num(ac, av, head);
    if(!check_if_sorted(head[0]))
        // main_sort(head);
    printf("%d", check_if_sorted(head[0]));
    clear_stack(head, 2, 'S');
}
