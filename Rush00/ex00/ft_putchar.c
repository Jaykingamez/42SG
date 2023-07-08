/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:05:55 by sichan            #+#    #+#             */
/*   Updated: 2023/06/24 14:09:45 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //contains write function

void	ft_putchar(char c);
void	print_line(char start, char middle, char end, int column_count);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(char start, char middle, char end, int column_count)
{
	ft_putchar(start);
	while (--column_count > 1)
		ft_putchar(middle);
	if (column_count)
		ft_putchar(end);
}
