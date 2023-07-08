/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:41:17 by sichan            #+#    #+#             */
/*   Updated: 2023/07/01 15:46:34 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(const char *a, const char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_strings(int num, char **s)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			temp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = temp;
			j--;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	ft_sort_strings(argc - 1, argv + 1);
	while (counter < argc)
	{
		while (*argv[counter] != '\0')
		{
			write(1, argv[counter], 1);
			argv[counter]++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
