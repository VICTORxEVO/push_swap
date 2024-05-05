/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:45:07 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:45:08 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_duplicate(t_stack **head)
{
	int		doubtful;
	t_stack	*tmp;
	t_stack	*tmp_head;

	tmp_head = *head;
	while (tmp_head)
	{
		tmp = tmp_head->next;
		doubtful = tmp_head->num;
		while (tmp)
		{
			if (doubtful == tmp->num)
				clear_stack(head, 'E');
			tmp = tmp->next;
		}
		tmp_head = tmp_head->next;
	}
}
