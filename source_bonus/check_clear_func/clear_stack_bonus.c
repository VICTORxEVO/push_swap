/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stack_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:20:25 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/04 11:24:21 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

void	clear_stack(t_stack **head, char flag)
{
	(ft_lstclear(head), ft_lstclear(head + 1), free(head));
	if (flag == 'E')
	{
		ft_putstr_err("Error\n");
		exit(EXIT_FAILURE);
	}
	else
		exit(EXIT_SUCCESS);
}
