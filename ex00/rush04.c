/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:56:23 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/20 12:32:28 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_conditions(int row, int col, int x, int y)
{
	if (row == 0 && col == 0)
	{
		ft_putchar('A');
	}
	else if (row == 0 && col == (y - 1))
	{
		ft_putchar('C');
	}
	else if (row == (x - 1) && col == 0)
	{
		ft_putchar('C');
	}
	else if (row == (x - 1) && col == (y - 1))
	{
		ft_putchar('A');
	}
	else if (row == 0 || col == 0 || row == (x - 1) || col == (y - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			check_conditions(row, col, x, y);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
