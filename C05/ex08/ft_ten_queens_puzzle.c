/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:36:54 by sichan            #+#    #+#             */
/*   Updated: 2023/07/05 14:16:08 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ten_queens_puzzle(void);
int		solver(int board[10], int column);
int		is_safe(int board[10], int row, int col);
void	output_array(int board[10]);

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (solver(board, 0));
}

void	output_array(int board[10])
{
	int		counter;
	char	character;

	counter = 0;
	while (counter < 10)
	{
		character = '0' + board[counter];
		write(1, &character, 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	is_safe(int board[10], int row, int col)
{
	int	x;
	int	y;

	x = 0;
	while (x < col)
	{
		if (board[x] == row)
			return (0);
		x++;
	}
	x = col;
	y = row;
	while (--x >= 0 && --y >= 0)
	{
		if (board[x] == y)
			return (0);
	}
	x = col;
	y = row;
	while (--x >= 0 && ++y <= 9)
	{
		if (board[x] == y)
			return (0);
	}
	return (1);
}

int	solver(int board[10], int col)
{
	int	solutions;
	int	row;

	row = 0;
	solutions = 0;
	if (col == 10)
	{
		output_array(board);
		return (1);
	}
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			solutions += solver(board, col + 1);
		}
		row++;
	}
	return (solutions);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("\n%d\n", ft_ten_queens_puzzle());
	return (0);
}
*/
