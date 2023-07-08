/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:35:44 by sichan            #+#    #+#             */
/*   Updated: 2023/06/28 14:59:00 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_get_hex(unsigned long long number, int first)
{
	char	*base;

	base = "0123456789abcdef";
	if (number < 16 && first == 1)
		write(1, "0", 1);
	if (number >= 16)
	{
		ft_get_hex(number / 16, 0);
		ft_get_hex(number % 16, 0);
	}
	else
		write(1, (base + number), 1);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	temp;
	int					counter;

	temp = addr;
	counter = 0;
	while (counter++ < 16)
	{
		if (temp < 16)
			write(1, "0", 1);
		temp /= 16;
	}
	ft_get_hex(addr, 1);
}

void	ft_print_data(unsigned char *c, int size)
{
	int	counter;

	counter = -1;
	while (counter++ < 15)
	{
		if (counter % 2 == 0)
			write(1, " ", 1);
		if (counter < size)
			ft_get_hex((unsigned long long)*(c + counter), 1);
		else if (counter != 16)
			write(1, " ", 2);
	}
	counter = -1;
	while (counter++ < size - 1)
	{
		if (*(c + counter) <= 31 || *(c + counter) >= 127)
			write(1, ".", 1);
		else
			write(1, (c + counter), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	counter;
	unsigned char	*character;
	unsigned int	sendsize;

	counter = 0;
	character = addr;
	while (counter * 16 < size)
	{
		if (counter < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)character + (counter * 16));
		write(1, ":", 1);
		ft_print_data(character + (counter * 16), sendsize);
		write(1, "\n", 1);
		counter++;
	}
	return (addr);
}
