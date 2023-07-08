/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:10:24 by sichan            #+#    #+#             */
/*   Updated: 2023/06/24 14:24:34 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_line(char start, char middle, char end, int column_count);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
				print_line('o', '-', 'o', x);
			else if (i == y - 1)
				print_line('o', '-', 'o', x);
			else
				print_line('|', ' ', '|', x);
			i++;
			write(1, "\n", 1);
		}
	}
}
