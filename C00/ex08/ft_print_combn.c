/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:41:16 by sichan            #+#    #+#             */
/*   Updated: 2023/06/23 13:19:26 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initializer(int *array, int n);
void	biggest_array(int *array, int n);
int		compare_arrays(int a[], int b[], int n);
void	output_array(int a[], int b[], int n);
void	ft_print_combn(int n);

/* Initialize all values in array as zero */
void	initializer(int *array, int n)
{
	int	counter;

	counter = n;
	while (counter > 0)
	{
		array[counter - 1] = 0;
		counter--;
	}
}

/* Create biggest array */
void	biggest_array(int *array, int n)
{
	int	counter;
	int	number;

	number = 9;
	counter = n;
	while (counter > 0)
	{
		array[counter - 1] = number;
		counter--;
		number--;
	}
}

/* Compare array to see if it is biggest value */
int	compare_arrays(int a[], int b[], int n)
{
	int	counter;

	counter = n;
	while (counter > 0)
	{
		if (a[counter - 1] != b[counter - 1])
			return (0);
		counter--;
	}
	return (1);
}

/* Output array to terminal, don't output comma and space if biggest digit*/
void	output_array(int a[], int b[], int n)
{
	char	character;
	int		counter;

	counter = 0;
	while (counter < n)
	{
		character = 48 + a[counter];
		write(1, &character, 1);
		counter++;
	}
	if (!compare_arrays(a, b, n))
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

/* Print array combinations ranging from 0 to 9 */
void	ft_print_combn(int n)
{
	int	largest_array [9];
	int	number_array [9];
	int	pointer;

	initializer(largest_array, n);
	initializer(number_array, n);
	biggest_array(largest_array, n);
	pointer = n;
	while (!compare_arrays(number_array, largest_array, n))
	{
		while (number_array[pointer - 1]++ < largest_array[pointer - 1])
			output_array(number_array, largest_array, n);
		while (number_array[pointer -1] >= largest_array[pointer - 1])
			pointer--;
		if (pointer <= 0)
			return ;
		number_array[pointer - 1]++;
		while (pointer < n)
		{
			number_array[pointer] = number_array[pointer - 1] + 1;
			pointer++;
		}
		output_array(number_array, largest_array, n);
	}
}
