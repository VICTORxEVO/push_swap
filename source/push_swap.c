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
    printf("is sorted -->>%d and max value is %d\n", check_if_sorted(head[0]), give_max(head, 'a'));
    t_stack *tmp = head[0];
    int i = 0;
    while(tmp)
    {
        printf("%d   ", tmp->num);
        printf("index is %d\n", i++);
        printf("------------------\n");
        tmp = tmp->next;
    }
    printf("\nAFTER PUSH\n");
    push_to('b', head);
    push_to('b', head);
    swap('a', head);
    // swap('b', head);
    t_stack *tmp1 = head[0];
    int i1 = 0;
    while(tmp1)
    {
        printf("%d   ", tmp1->num);
        printf("index is %d\n", i1++);
        printf("------------------\n");
        tmp1 = tmp1->next;
    }
    printf("\n\n");
    printf("stack b have -->> %d", head[1]->num);

    clear_stack(head, 'S');
}
