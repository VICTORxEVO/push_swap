/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:44:59 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/04/25 17:48:53 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi(const char *str, t_stack **head, char **arr)
{
	long	res;
	char	sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
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
		if (res >= INT_MAX || res <= INT_MIN)
			(clear_arr(arr), clear_stack(head, 'E'));
	}
	return (res * sign);
}
