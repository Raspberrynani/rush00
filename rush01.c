/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotan <hotan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:45:43 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/21 17:24:56 by hotan            ###   ########.fr       */
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
		ft_print_manager(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			ft_print_manager(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			ft_print_manager(x, '\\', '*', '/');
	}
}
