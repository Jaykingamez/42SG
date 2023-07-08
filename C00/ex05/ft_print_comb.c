/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:57:02 by sichan            #+#    #+#             */
/*   Updated: 2023/06/22 14:11:24 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char hundred, char ten, char one);
void	ft_print_comb(void);

void	ft_print(char hundred, char ten, char one)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &one, 1);
	if (hundred == '7' && ten == '8' && one == '9')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundredth_digit;
	char	tenth_digit;
	char	ones_digit;

	hundredth_digit = '0';
	tenth_digit = '1';
	ones_digit = '2';
	while (hundredth_digit <= '9')
	{
		tenth_digit = hundredth_digit + 1;
		while (tenth_digit <= '9')
		{
			ones_digit = tenth_digit + 1;
			while (ones_digit <= '9')
			{
				ft_print(hundredth_digit, tenth_digit, ones_digit);
				ones_digit += 1;
			}
			tenth_digit += 1;
		}
		hundredth_digit += 1;
	}
}
