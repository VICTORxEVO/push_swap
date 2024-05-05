/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:21:23 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 11:21:25 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

void	swap(char stack, t_stack **head)
{
	if (stack == 'a' && head[0] && head[0]->next)
		ft_swap(&head[0]->num, &head[0]->next->num);
	else if (stack == 'b' && head[1] && head[1]->next)
		ft_swap(&head[1]->num, &head[1]->next->num);
	else if (stack == 'A')
	{
		if (head[0] && head[0]->next)
			ft_swap(&head[0]->num, &head[0]->next->num);
		if (head[1] && head[1]->next)
			ft_swap(&head[1]->num, &head[1]->next->num);
	}
}
