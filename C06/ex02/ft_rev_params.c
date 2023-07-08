/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:42:53 by sichan            #+#    #+#             */
/*   Updated: 2023/07/01 15:46:00 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;

	while (--argc >= 1)
	{
		string = argv[argc];
		while (*string != '\0')
		{
			write(1, string, 1);
			string++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
