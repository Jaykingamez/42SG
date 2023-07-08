/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:33:56 by sichan            #+#    #+#             */
/*   Updated: 2023/07/01 15:04:06 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int		counter;

	counter = 1;
	while (counter < argc)
	{
		string = argv[counter];
		while (*string != '\0')
		{
			write(1, string, 1);
			string++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
