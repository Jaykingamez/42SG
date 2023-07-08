/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:40:12 by sichan            #+#    #+#             */
/*   Updated: 2023/07/06 17:51:52 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_atoi_base_search(char *str, int *i);
int	ft_atoi_base_error(char *base);

char	*malloc_array(int base, int nb, int mult)
{
	int		size;
	char	*array;

	size = 1;
	if (mult < 0)
		size++;
	while (nb > base)
	{
		size++;
		nb /= base;
	}
	array = (char *) malloc(sizeof(char) * size);
	return (array);
}

void	fill_array(int number, char *base, char *array, int *pointer)
{
	int	length;

	length = ft_atoi_base_error(base);
	if (number >= length)
	{
		fill_array(number / length, base, array, pointer);
		fill_array(number % length, base, array, pointer);
	}
	else
		array[(*pointer)++] = base[number];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	int		mult;
	int		pointer;
	char	*array;

	if (!ft_atoi_base_error(base_from) || !ft_atoi_base_error(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	pointer = 0;
	if (number < 0)
		mult = -1;
	array = malloc_array(ft_atoi_base_error(base_to), number, mult);
	if (number < 0)
	{
		array[pointer++] = '-';
		number = -number;
	}
	fill_array(number, base_to, array, &pointer);
	array[pointer] = '\0';
	return (array);
}
