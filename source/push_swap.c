#include "../includes/push_swap.h"

void    print_stack(t_stack *head, char flag)
{
    if (flag == 'a')
        printf("satck A\n+++++++++++++++++++++\n\n");
    else
        printf("satck B\n+++++++++++++++++++++\n\n");
    t_stack *tmp = head;
    while(tmp)
    {
        if (tmp->target)
        {
            printf("number -->> %d target->number %d\n", tmp->num, tmp->target->num);
            printf("---------------------\n");
        }
        else
        {
            printf("number -->> %d\n", tmp->num);
            printf("---------------------\n");
        }
        tmp = tmp->next;
    }
    printf("\n+++++++++++++END+++++++++++++\n\n");
}

int main (int ac, char *av[])
{
    t_stack *a;
    t_stack *b;
    t_stack **head;

    check_arg(ac - 1, av + 1);
    head = load_stack(&a, &b);
    load_check_num(ac - 1, av + 1, head);
    // print_stack(head[0], 'a');
    // print_stack(head[1], 'b');
    if (!check_if_sorted(head[0]))
        main_sort(head);
    // if (check_if_sorted(head[0]))
    //     write(1, "OK\n", 3);
    // else
    //     write(1, "KO\n", 3);
    clear_stack(head, 'S');
}
