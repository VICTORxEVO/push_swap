/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_targets.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:44:51 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:44:52 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	set_targets_null(t_stack *node)
{
	while (node)
	{
		node->target = ((void *)0);
		node = node->next;
	}
}

static void	target_comfirmed(t_stack **to_set, t_stack **doubtful_target,
		long *nearest_number)
{
	(*to_set)->target = *doubtful_target;
	*nearest_number = (*doubtful_target)->num;
}

void	set_a_targets(t_stack **head)
{
	t_stack	*to_set;
	t_stack	*doubtful_target;
	long	nearest_bellow;

	set_targets_null(head[0]);
	to_set = head[0];
	while (to_set)
	{
		doubtful_target = head[1];
		nearest_bellow = LONG_MIN;
		while (doubtful_target)
		{
			if (doubtful_target->num > nearest_bellow
				&& doubtful_target->num < to_set->num)
				target_comfirmed(&to_set, &doubtful_target, &nearest_bellow);
			doubtful_target = doubtful_target->next;
		}
		if (!to_set->target)
			to_set->target = give_max('b', head);
		to_set = to_set->next;
	}
}

void	set_b_targets(t_stack **head)
{
	t_stack	*to_set;
	t_stack	*doubtful_target;
	long	nearest_up;

	set_targets_null(head[1]);
	to_set = head[1];
	while (to_set)
	{
		doubtful_target = head[0];
		nearest_up = LONG_MAX;
		while (doubtful_target)
		{
			if (doubtful_target->num < nearest_up
				&& doubtful_target->num > to_set->num)
				target_comfirmed(&to_set, &doubtful_target, &nearest_up);
			doubtful_target = doubtful_target->next;
		}
		if (!to_set->target)
			to_set->target = give_min('a', head);
		to_set = to_set->next;
	}
}
