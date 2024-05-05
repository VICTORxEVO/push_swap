/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:45:01 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 11:57:51 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	update_stack_indexing(t_stack **head)
{
	size_t	i;
	t_stack	*node;

	node = *head;
	i = 0;
	while (node)
	{
		node->index = i;
		node = node->next;
		i++;
	}
	if (head[1])
		update_stack_indexing(head + 1);
	node = *head;
	while (node)
	{
		node->is_upper_mid = false;
		if (node->index < i / 2)
			node->is_upper_mid = true;
		node = node->next;
	}
}
