/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_row_column.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:25:34 by sichan            #+#    #+#             */
/*   Updated: 2023/07/02 20:25:36 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	in_row(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < col)
		if (board[row][i++] == digit + '0')
			return (1);
	return (0);
}

int	in_column(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < row)
		if (board[i++][col] == digit + '0')
			return (1);
	return (0);
}
