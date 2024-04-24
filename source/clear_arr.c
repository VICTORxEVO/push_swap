#include "../includes/push_swap.h"

void    clear_arr(char **arr)
{
    int i;

    i = -1;
    while (arr[++i])
        free(arr[i]);
    free(arr);
}