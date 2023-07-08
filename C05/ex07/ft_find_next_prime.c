/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:49:20 by sichan            #+#    #+#             */
/*   Updated: 2023/07/05 11:31:20 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb < 2)
		return (0);
	while (counter <= (nb / counter))
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb < 2147483647)
		nb++;
	return (nb);
}
