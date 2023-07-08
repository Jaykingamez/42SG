/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:40:47 by sichan            #+#    #+#             */
/*   Updated: 2023/06/24 11:47:05 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap_function(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

void	swap_function(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{	
	int	counter;
	int	swap;

	counter = 0;
	swap = size / 2;
	while (swap--)
		swap_function(&tab[counter++], &tab[--size]);
}
