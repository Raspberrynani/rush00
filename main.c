/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:51:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/08/21 18:18:51 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_integer_only(char *str)
{
	int	output;
	int	base;
	int	deducted;

	deducted = 0;
	base = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (-1);
		str++;
		deducted++;
		base *= 10;
	}
	base /= 10;
	str -= deducted;
	output = 0;
	while (*str != '\0')
	{
		output += (*str - 48) * base;
		base /= 10;
		str++;
	}
	return (output);
}

int	main(int argc, char *argv[])
{
	int	i_col;
	int	i_row;

	i_col = 5;
	i_row = 5;
	if (argc == 1)
		rush(i_col, i_row);
	else if (argc == 3)
	{
		i_col = ft_integer_only(argv[1]);
		i_row = ft_integer_only(argv[2]);
		if (i_col == -1 || i_row == -1)
			write(1, "Please insert: column row\n", 28);
		else
		{
			rush(i_col, i_row);
			return (0);
		}
	}
	else
		write(1, "Please insert: column row\n", 28);
}
