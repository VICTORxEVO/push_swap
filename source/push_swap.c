#include "../includes/push_swap.h"

static void    print_stack(t_stack *head, char flag)
{
    if (flag == 'a')
        printf("satck A\n+++++++++++++++++++++\n");
    else
        printf("satck B\n+++++++++++++++++++++\n");
    t_stack *tmp = head;
    int i = 0;
    while(tmp)
    {
        printf("i -->> %d\tnumber -->> %d\n", tmp->index, tmp->num);
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
    printf("is sorted -->>%d and max value is %d\n", check_if_sorted(head[0]), give_max(head, 'a'));
    update_stack_indexing(head);
    print_stack(head[0], 'a');
    print_stack(head[1], 'b');
    printf("------\nAFTER PUSH\n--------\n");
    push_to('b', head);
    push_to('b', head);
    swap('A', head);
    // swap('b', head);
    // swap('b', head);
    print_stack(head[0], 'a');
    print_stack(head[1], 'b');
    clear_stack(head, 'S');
}
