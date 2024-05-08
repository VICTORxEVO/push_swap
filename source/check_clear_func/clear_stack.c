/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:45:17 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/08 20:10:35 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	clear_stack(t_stack **head, char flag)
{
	(ft_lstclear(head), ft_lstclear(head + 1), free(head));
	if (flag == 'E')
	{
		ft_putstr_err("Error\n");
		exit(255);
	}
	else
		exit(EXIT_SUCCESS);
}
