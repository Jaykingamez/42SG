/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:17:23 by sichan            #+#    #+#             */
/*   Updated: 2023/07/01 18:24:58 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	divisor(int nb, int first)
{
	char	output;

	output = '0';
	if (nb == 0 && first)
		write(1, "0", 1);
	if (nb > 0)
	{
		output = (nb % 10) + '0';
		nb /= 10;
		divisor(nb, 0);
		write(1, &output, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		divisor(147483648, 1);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	divisor(nb, 1);
}
