/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:21:11 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 11:21:13 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

void	push_to(char stack, t_stack **head)
{
	t_stack	*next_node;

	if (stack == 'b' && head[0])
	{
		next_node = head[1];
		head[1] = head[0];
		head[0] = head[0]->next;
		head[1]->next = NULL;
		if (head[1])
			head[1]->next = next_node;
	}
	else if (stack == 'a' && head[1])
	{
		next_node = head[0];
		head[0] = head[1];
		head[1] = head[1]->next;
		head[0]->next = NULL;
		if (head[0])
			head[0]->next = next_node;
	}
}
