/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:34:33 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/02 15:03:38 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

size_t	ft_lstsize(t_stack *lst)
{
	size_t	s;

	s = 0;
	while (lst)
	{
		++s;
		lst = lst->next;
	}
	return (s);
}
