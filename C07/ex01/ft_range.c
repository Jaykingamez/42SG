/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:05:34 by sichan            #+#    #+#             */
/*   Updated: 2023/07/05 20:07:28 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	counter;

	if (min >= max)
		return (NULL);
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
