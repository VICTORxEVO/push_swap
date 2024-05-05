/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_touch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:44:43 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:56:24 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	final_touch(t_stack **head, t_stack *min_node)
{
	if (min_node->is_upper_mid)
	{
		while (head[0] != min_node)
			rotate('a', head);
	}
	else
	{
		while (head[0] != min_node)
			rev_rotate('a', head);
	}
}
