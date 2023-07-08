/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:46:51 by sichan            #+#    #+#             */
/*   Updated: 2023/06/29 15:21:19 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num_of_minus;
	int	number;

	num_of_minus = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			num_of_minus++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
		number = (number * 10) + (*str++ - 48);
	if (num_of_minus % 2 == 1)
		number = -number;
	return (number);
}
