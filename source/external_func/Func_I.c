/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func_I.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysbai-jo <ysbai-jo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:29:55 by ysbai-jo          #+#    #+#             */
/*   Updated: 2024/04/02 14:41:54 by ysbai-jo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr(const char *s, int *len)
{
	if (!s)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*s)
	{
		ft_putchar(*s, len);
		s++;
	}
}

void	ft_putnbr(int n, int *len)
{
	unsigned int	n_pro;

	n_pro = n;
	if (n < 0)
	{
		ft_putchar('-', len);
		n_pro *= -1;
	}
	if (n_pro < 10)
		ft_putchar(n_pro + '0', len);
	else
	{
		ft_putnbr(n_pro / 10, len);
		ft_putchar(n_pro % 10 + '0', len);
	}
}

void	ft_putnbrv2(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + '0', len);
	else
	{
		ft_putnbrv2(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
}
