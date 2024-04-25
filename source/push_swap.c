#include "../includes/push_swap.h"

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
    // printf("nummm is  %d\n", head[0]->num);
    // printf("is sorted -->>%d and max value is %d\n", check_if_sorted(head[0]), give_max(head));
    t_stack *tmp = head[0];
    int i = 0;
    while(tmp)
    {
        printf("%d   ", tmp->num);
        printf("index is %d\n", i++);
        printf("------------------\n");
        tmp = tmp->next;
    }
    printf("\n");
    clear_stack(head, 2, 'S');
}
