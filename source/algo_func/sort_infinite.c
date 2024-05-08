/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_infinite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:44:59 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/08 20:58:18 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_infinite_r(t_stack **head)
{
	set_b_targets(head);
	move_targets_up(head, head[1]->target, head[1]);
	push_to('a', head);
}

void	sort_infinite(t_stack **head)
{
	t_stack	*cheapest;

	push_to('b', head);
	push_to('b', head);
	if (is_sorted(head[1]))
		swap('b', head);
	while (ft_lstsize(head[0]) > 3 && !is_sorted(head[0]))
	{
		set_a_targets(head);
		calculate_cost(head[0], ft_lstsize(head[0]), ft_lstsize(head[1]));
		cheapest = extract_cheapest(head[0]);
		move_targets_up(head, cheapest, cheapest->target);
		push_to('b', head);
	}
	if (ft_lstsize(head[0]) < 4 && !is_sorted(head[0]))
		sort_3(head);
	while (head[1])
		sort_infinite_r(head);
	if (!is_sorted(head[0]))
		final_touch(head, give_min('a', head));
}
