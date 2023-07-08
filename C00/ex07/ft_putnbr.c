/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:44:43 by sichan            #+#    #+#             */
/*   Updated: 2023/06/23 13:10:51 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	num_array [10];
	int		counter;
	char	character;

	counter = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0 || nb < 0)
	{
		num_array[counter] = (nb % 10);
		nb /= 10;
		counter++;
	}
	while (counter > 0)
	{
		character = num_array[counter - 1] + 48;
		write(1, &character, 1);
		counter--;
	}
	write(1, "\n", 1);
}
