/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:39:58 by sichan            #+#    #+#             */
/*   Updated: 2023/06/28 14:58:33 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_put_hex(char c, int first)
{
	char	*base;

	base = "0123456789abcdef";
	if (c < 16 && first == 1)
		write(1, "0", 1);
	if (c >= 16)
	{
		ft_put_hex(c / 16, 0);
		ft_put_hex(c % 16, 0);
	}
	else
		write(1, (base + c), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32 || str[counter] >= 127)
		{
			write(1, "\\", 1);
			ft_put_hex(str[counter], 1);
		}
		else
			write(1, (str + counter), 1);
		counter++;
	}
}
