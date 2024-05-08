/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:19:58 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/08 20:16:10 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap_bonus.h"

static void	check_if_num(int ac, char *av[])
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			if (!ft_isdigit(av[i][j]) && !(av[i][j] == ' ' || av[i][j] == '+'
					|| av[i][j] == '-'))
				(ft_putstr_err("Error\n"), exit(255));
		}
	}
}

void	check_arg(int ac, char *av[])
{
	if (ac < 1)
		exit(0);
	check_if_num(ac, av);
}
