/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:37:32 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/02 15:01:08 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*tm;

	if (!lst)
		return ;
	while ((*lst) != NULL)
	{
		tm = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = tm;
	}
	*lst = NULL;
}
