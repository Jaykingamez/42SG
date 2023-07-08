/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:04:52 by sichan            #+#    #+#             */
/*   Updated: 2023/06/25 13:46:36 by fteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	rush(int x, int y);
int	process(char *str);

int	process(char *str)
{
	int	counter;
	int	number;

	number = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		number = number * 10 + (str[counter] - 48);
		counter++;
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 5;
	y = 3;
	if (argc > 1)
	{
		x = process(argv[1]);
		y = process(argv[2]);
		rush(x, y);
	}
	else
	{
		rush(x, y);
	}
	return (0);
}
