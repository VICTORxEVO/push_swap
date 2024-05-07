/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:21:29 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/05/07 20:26:44 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

static void	other_input(char *line, t_stack **head)
{
	if (!ft_strcmp(line, "ra\n"))
		rotate('a', head);
	else if (!ft_strcmp(line, "rb\n"))
		rotate('b', head);
	else if (!ft_strcmp(line, "rr\n"))
		rotate('A', head);
	else if (!ft_strcmp(line, "rra\n"))
		rev_rotate('a', head);
	else if (!ft_strcmp(line, "rrb\n"))
		rev_rotate('b', head);
	else if (!ft_strcmp(line, "rrr\n"))
		rev_rotate('A', head);
	else
		(free(line), clear_stack(head, 'E'));
}

static void	main_exec_input(t_stack **head)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!ft_strcmp(line, "pb\n"))
			push_to('b', head);
		else if (!ft_strcmp(line, "pa\n"))
			push_to('a', head);
		else if (!ft_strcmp(line, "sa\n"))
			swap('a', head);
		else if (!ft_strcmp(line, "sb\n"))
			swap('b', head);
		else if (!ft_strcmp(line, "ss\n"))
			swap('A', head);
		else
			other_input(line, head);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;
	t_stack	**head;

	check_arg(ac - 1, av + 1);
	head = load_stack(&a, &b);
	load_check_num(ac - 1, av + 1, head);
	main_exec_input(head);
	if (is_sorted(head[0]) && !head[1])
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clear_stack(head, 'S');
	return (512);
}
