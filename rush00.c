/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:45:43 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/23 12:17:37 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_manager(int x, char start, char mid, char end)
{
	ft_putchar(start);
	x--;
	while (x > 1)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 0)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_manager(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_print_manager(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			ft_print_manager(x, 'o', '-', 'o');
	}
}
