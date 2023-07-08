/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:41:28 by sichan            #+#    #+#             */
/*   Updated: 2023/06/29 15:44:22 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_nbr(int n, int base_value, char *symbols);

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		++base_value;
	}
	if (base_value < 2 || double_char(base))
		return ;
	print_nbr(nbr, base_value, base);
}

void	print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		write(1, "-", 1);
	}
	if (n_long >= base_value)
		print_nbr(n_long / base_value, base_value, symbols);
	write(1, (symbols + (n_long % base_value)), 1);
}
