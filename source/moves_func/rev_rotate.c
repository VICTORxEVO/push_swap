/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:44:13 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:57:22 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static t_stack	*ft_lstlast_1before(t_stack *lst)
{
	while (lst)
	{
		if (!lst->next->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

static void	rev_rotate_part2(t_stack **head)
{
	t_stack	*before_last;
	t_stack	*last;

	last = ft_lstlast(*head);
	before_last = ft_lstlast_1before(*head);
	last->next = head[0];
	head[0] = last;
	before_last->next = ((void *)0);
}

void	rev_rotate(char stack, t_stack **head)
{
	if (stack == 'a' && head[0] && head[0]->next)
		(rev_rotate_part2(head), write(1, "rra\n", 4));
	else if (stack == 'b' && head[1] && head[1]->next)
		(rev_rotate_part2(head + 1), write(1, "rrb\n", 4));
	else if (stack == 'A')
	{
		if (head[0] && head[0]->next)
			rev_rotate_part2(head);
		if (head[1] && head[1]->next)
			rev_rotate_part2(head + 1);
		if ((head[0] && head[0]->next) || (head[1] && head[1]->next))
			write(1, "rrr\n", 4);
	}
	update_stack_indexing(head);
}
