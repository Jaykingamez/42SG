/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:34:05 by sichan            #+#    #+#             */
/*   Updated: 2023/07/01 15:03:52 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	if (argc)
	{
		name = argv[0];
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
