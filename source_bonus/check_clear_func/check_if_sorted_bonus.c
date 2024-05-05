/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:20:12 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 11:24:15 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

bool	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->num > a->next->num)
			return (false);
		a = a->next;
	}
	return (true);
}
