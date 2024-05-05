/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:45:09 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 10:50:00 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
