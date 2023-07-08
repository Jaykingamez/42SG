/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:18:27 by sichan            #+#    #+#             */
/*   Updated: 2023/06/22 14:07:32 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	starting_letter;

	starting_letter = 'a';
	while (starting_letter <= 'z')
	{
		write(1, &starting_letter, 1);
		starting_letter += 1;
	}
}
