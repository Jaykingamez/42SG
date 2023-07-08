/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:07:05 by sichan            #+#    #+#             */
/*   Updated: 2023/06/24 17:44:48 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 65 && str[counter] <= 90)
				|| (str[counter] >= 97 && str[counter] <= 122)))
			return (0);
		counter++;
	}
	return (1);
}
