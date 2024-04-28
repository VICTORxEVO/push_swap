#include "../includes/push_swap.h"

static void    print_stack(t_stack *head, char flag)
{
    if (flag == 'a')
        printf("satck A\n+++++++++++++++++++++\n");
    else
        printf("satck B\n+++++++++++++++++++++\n");
    t_stack *tmp = head;
    while(tmp)
    {
        printf("i -->> %d\tnumber -->> %d target->num \n", tmp->index, tmp->num);
        printf("---------------------\n");
        tmp = tmp->next;
    }
    printf("\n+++++++++++++END+++++++++++++\n");
}

int main (int ac, char *av[])
{
    t_stack *a;
    t_stack *b;
    t_stack **head;

    check_arg(ac - 1, av + 1);
    head = load_stack(&a, &b);
    load_check_num(ac - 1, av + 1, head);
    // if(!check_if_sorted(head[0]))
    //     main_sort(head);
    // printf("is sorted -->>%d and max value is %d\n", check_if_sorted(head[0]), give_max('a', head));
    update_stack_indexing(head);
    // print_stack(head[0], 'a');
    // print_stack(head[1], 'b');
    // printf("------\nAFTER PUSH\n--------\n");
    // sort_infinite(head, ft_lstsize(head[0]));
    sort_5(head);
    // print_stack(head[0], 'a');
    // print_stack(head[1], 'b');
    // if (check_if_sorted(head[0]))
    //     write(1, "OK\n", 3);
    // else
    //     write(1, "KO\n", 3);
    clear_stack(head, 'S');
}
