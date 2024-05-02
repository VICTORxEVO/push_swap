#include "../../includes/push_swap_bonus.h"

void    clear_arr(char **arr)
{
    int i;

    i = -1;
    while (arr[++i])
        free(arr[i]);
    free(arr);
}