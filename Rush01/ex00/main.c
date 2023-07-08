/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:25:45 by sichan            #+#    #+#             */
/*   Updated: 2023/07/02 20:25:50 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int n, char **conds);

int		verify_params(int n, char **argv);

void	print_error(void);

char	**create_conds(int n, char *str);

int	main(int argc, char **argv)
{	
	int		dim;
	char	**conds;

	dim = verify_params(argc, argv);
	conds = create_conds(dim, argv[1]);
	if (!dim || argc != 2)
		print_error();
	else
		rush(dim, conds);
	return (0);
}
