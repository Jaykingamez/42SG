/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:07 by sichan            #+#    #+#             */
/*   Updated: 2023/06/22 14:13:02 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int number);
void	ft_print_comb2(void);

void	write_number(int number)
{
	char	character;

	if (number < 10)
	{
		character = number + 48;
		write(1, "0", 1);
		write(1, &character, 1);
		return ;
	}
	character = (number / 10) + 48;
	write(1, &character, 1);
	character = number % 10 + 48;
	write(1, &character, 1);
}

void	ft_print_comb2(void)
{
	int	number_array[2];

	number_array[0] = 0;
	while (number_array[0] < 99)
	{
		number_array[1] = number_array[0] + 1;
		while (number_array[1] < 100)
		{
			write_number(number_array[0]);
			write(1, " ", 1);
			write_number(number_array[1]);
			if (number_array[0] == 98 && number_array[1] == 99)
				return ;
			else
				write(1, ", ", 2);
			number_array[1]++;
		}
		number_array[0]++;
	}
}
