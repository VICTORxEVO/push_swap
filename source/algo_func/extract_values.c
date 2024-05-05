/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:44:40 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:53:38 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*give_max(char stack, t_stack **head)
{
	t_stack	*max;
	t_stack	*tmp;

	tmp = head[0];
	if (stack == 'b')
		tmp = head[1];
	max = tmp;
	while (tmp)
	{
		if (tmp->num > max->num)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

t_stack	*give_min(char stack, t_stack **head)
{
	t_stack	*tmp;
	t_stack	*min;

	tmp = head[0];
	if (stack == 'b')
		tmp = head[1];
	min = head[0];
	while (tmp)
	{
		if (tmp->num < min->num)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
