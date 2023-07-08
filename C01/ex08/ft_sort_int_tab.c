/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:07:37 by sichan            #+#    #+#             */
/*   Updated: 2023/06/24 13:46:27 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	iteration;
	int	temp;

	iteration = 0;
	counter = 0;
	while (iteration < size - 1)
	{
		while (counter < size - iteration - 1)
		{
			if (tab[counter + 1] < tab[counter])
			{
				temp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = temp;
			}
			counter++;
		}
		counter = 0;
		iteration++;
	}
}
