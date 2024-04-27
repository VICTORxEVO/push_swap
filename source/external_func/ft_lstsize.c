/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:34:33 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/04/27 12:22:39 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

unsigned int	ft_lstsize(t_stack *lst)
{
	unsigned int	s;

	s = 0;
	while (lst)
	{
		++s;
		lst = lst->next;
	}
	return (s);
}
