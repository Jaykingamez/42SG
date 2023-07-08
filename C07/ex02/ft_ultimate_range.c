/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:16:31 by sichan            #+#    #+#             */
/*   Updated: 2023/07/03 20:23:20 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	counter;

	if (min >= max)
		return (0);
	array = (int *) malloc (sizeof(int) * (max - min));
	counter = 0;
	while (min < max)
	{
		array[counter] = min;
		counter++;
		min++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
