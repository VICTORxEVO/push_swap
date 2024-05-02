/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:44:59 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/02 15:00:57 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

int	ft_atoi(const char *str, t_stack **head, char **arr)
{
	long		res;
	short int 	sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		if (str[i] == '-' || str[i] == '+' || !str[i])
			(clear_arr(arr), clear_stack(head, 'E'));
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
		if (res >= INT_MAX || res <= INT_MIN || str[i] == '-' || str[i] == '+')
			(clear_arr(arr), clear_stack(head, 'E'));
	}
	return (res * sign);
}
