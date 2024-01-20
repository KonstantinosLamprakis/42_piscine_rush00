/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushxx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:14:49 by klamprak          #+#    #+#             */
/*   Updated: 2024/01/20 14:33:42 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_LEFT '/'
#define UPPER_RIGHT '\\'
#define DOWN_LEFT '\\'
#define DOWN_RIGHT '/'
#define UPPER_MIDDLE '*'
#define DOWN_MIDDLE '*'

void	ft_putchar(char c);

void	check_rest_conditions(int row, int col, int x, int y)
{
	if (row == 0 || row == (x - 1))
	{
		ft_putchar(DOWN_MIDDLE);
	}
	else if (col == 0 || col == (y - 1))
	{
		ft_putchar(UPPER_MIDDLE);
	}
	else
	{
		ft_putchar(' ');
	}
}

void	check_conditions_xx(int row, int col, int x, int y)
{
	if (row == 0 && col == 0)
	{
		ft_putchar(UPPER_LEFT);
	}
	else if (row == 0 && col == (y - 1))
	{
		ft_putchar(DOWN_LEFT);
	}
	else if (row == (x - 1) && col == 0)
	{
		ft_putchar(UPPER_RIGHT);
	}
	else if (row == (x - 1) && col == (y - 1))
	{
		ft_putchar(DOWN_RIGHT);
	}
	else
	{
		check_rest_conditions(row, col, x, y);
	}
}

void	rush_xx(int x, int y)
{
	int	row;
	int	col;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			check_conditions_xx(row, col, x, y);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
