#include "../includes/push_swap.h"

void    main_sort(t_stack **head)
{
    size_t    size;

    update_stack_indexing(head);
    size = ft_lstsize(head[0]);
    if (size == 1)
        return ;
    else if (size == 2)
        swap('a', head);
    else if (size == 3)
        sort_3(head);
    else if (size == 4)
        sort_4(head);
    else if (size == 5)
        sort_5(head);
    else
        sort_infinite(head);
}

// void    print_stack(t_stack *head, char flag)
// {
//     if (flag == 'a')
//         printf("satck A\n+++++++++++++++++++++\n\n");
//     else
//         printf("satck B\n+++++++++++++++++++++\n\n");
//     t_stack *tmp = head;
//     while(tmp)
//     {
//         if (tmp->target)
//         {
//             printf("number -->> %d target->number %d\n", tmp->num, tmp->target->num);
//             printf("---------------------\n");
//         }
//         else
//         {
//             printf("number -->> %d\n", tmp->num);
//             printf("---------------------\n");
//         }
//         tmp = tmp->next;
//     }
//     printf("\n+++++++++++++END+++++++++++++\n\n");
// }

int main (int ac, char *av[])
{
    t_stack *a;
    t_stack *b;
    t_stack **head;

    check_arg(ac - 1, av + 1);
    head = load_stack(&a, &b);
    load_check_num(ac - 1, av + 1, head);
    if (!is_sorted(head[0]))
        main_sort(head);
    clear_stack(head, 'S');
}
